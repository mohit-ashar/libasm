OS := $(shell uname)

NAME = libasm.a
TEST_B = libasm
COMP = nasm -fmacho64
ifeq ($(OS), Linux)
COMP = nasm -felf64
endif

SRC := ./ft_read.s\
		./ft_write.s\
		./ft_strcmp.s\
		./ft_strcpy.s\
		./ft_strdup.s\
		./ft_strlen.s

OBJ := $(SRC:.s=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.s
	$(COMP)  $< -o $@

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(TEST_B) $(NAME) *.dSYM

re: fclean all

test: $(NAME)
	gcc -Wall -Werror -Wextra main.c -L. libasm.a -o $(TEST_B)
