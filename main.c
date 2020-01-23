/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/19 16:42:53 by mashar            #+#    #+#             */
/*   Updated: 2020/01/23 13:35:50 by mashar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>

int		ft_write(int, void*, int);
int		ft_read(int, void*, int);
int		ft_strlen(const char*);
int		ft_strcmp(const char*, const char*);
char*		ft_strcpy(const char*, const char*);
char*		ft_strdup(const char*);

int main()
{
	char buffer[100] = {0};
	char buffer1[100] = {0};
	printf("------read-----------\n");
	int x = ft_read(0, buffer, 100);
	printf("\nCharacters read ft: %d", x);
	int x1 = ft_read(0,buffer1, 100);
	printf("\nCharacters read fact: %d", x1);

	printf("\n\n------write-----------\n");
	int y = ft_write(1, buffer,100);
	int z = write(1, buffer, 100);

	printf("\nCharacters written ft: %d", y);
	printf("\nCharacters written fact: %d", z);
	
	printf("\n\n------strlen-----------");
	printf("\nft_strlen of (Hello world) is :%d",ft_strlen("Hello world"));

	printf("\n\n------strcmp-----------");
	const char *s1 = "Hello";
	const char *s2 = "Hello";
	printf("\nS1: %s",s1);
	printf("\nS2: %s",s2);
	printf("\nft_strcmp is : %d", ft_strcmp(s1,s2));
	printf("\nfactory strcmp is : %d", strcmp(s1,s2));
	
	printf("\n\n------strcpy-----------");
	char *src = "Hello world";
	printf("\nSource: %s",  src);
	char *dest = malloc(12* sizeof(char));
	char *dest1 = malloc(12* sizeof(char));
	ft_strcpy(dest, (const char*)src);
	printf("\nft_strcpy: %s", dest);
	strcpy(dest1, (const char*)src);
	printf("\nfactory strcpy: %s\n", dest1);
	free (dest);
	free (dest1);

	printf("\n\n------strdup-----------");
	printf("\nSource: %s",  src);
	char *dest2;
	char *dest3;
	dest2 = ft_strdup((const char*)src);
	dest3= strdup((const char*)src);
	printf("\nft_strdup: %s", dest2);
	printf("\nfactory strdup: %s", dest3);
	free (dest2);
	free (dest3);
	printf("\n\n------xxxxxx-----------");
}
