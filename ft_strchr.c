/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaksiss <soufianmaksiss@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 08:16:57 by smaksiss          #+#    #+#             */
/*   Updated: 2024/09/01 08:16:57 by smaksiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s && *s != c)
		*(s++);
	if (*s == c)
		return ((char *)s);
	return (NULL);
}
/*
int main()
{
	char *str = ft_strchr ("hello",'\0');
	if (str)
		printf("character found at : \"%s\"\n",str);
	else
		printf("character not found hh\n");
	
	//\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\

	char *str1 = ft_strchr ("iam here",'e');
	if (str1)
		printf("character found at : \"%s\"\n",str1);
	else
		printf("character not found hh\n");
	
	//\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
	
	char *str2 = ft_strchr ("hello",'h');
	if (str2)
		printf("character found at : \"%s\"\n",str2);
	else
		printf("character not found hh\n");
			
	//\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
	
	char *str3 = ft_strchr ("hello",'x');
	if (str3)
		printf("character found at : \"%s\"\n",str3);
	else
		printf("character not found hh\n");
}
*/