/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaksiss <soufianmaksiss@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 08:53:36 by smaksiss          #+#    #+#             */
/*   Updated: 2024/09/01 08:53:36 by smaksiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] && i < len)
	{
		if (big[i] == little[0])
		{
			j = 0;
			while (big[i + j] == little[j] && i + j < len && little[j])
				j++;
			if (little[j] == '\0')
				return ((char *)&big[i]);
		}
		++i;
	}
	return (NULL);
}
/*
int main()
{
    char *result1 = ft_strnstr("hello world", "world", 11);
    printf("Test 1: %s\n", result1 ? result1 : "NULL");

    char *result2 = ft_strnstr("hello world", "hello", 11);
    printf("Test 2: %s\n", result2 ? result2 : "NULL");

    char *result3 = ft_strnstr("hello world", "planet", 11);
    printf("Test 3: %s\n", result3 ? result3 : "NULL");

    char *result4 = ft_strnstr("hello world", "world", 5);
    printf("Test 4: %s\n", result4 ? result4 : "NULL");

    char *result5 = ft_strnstr("hello world", "", 11);
    printf("Test 5: %s\n", result5 ? result5 : "NULL");

    char *result6 = ft_strnstr("", "world", 11);
    printf("Test 6: %s\n", result6 ? result6 : "NULL");

    char *result7 = ft_strnstr("hello world", "planet", 20);
    printf("Test 7: %s\n", result7 ? result7 : "NULL");

    char *result8 = ft_strnstr("hi", "hello", 2);
    printf("Test 8: %s\n", result8 ? result8 : "NULL");

    char *result9 = ft_strnstr("isth is a test", "test", 14);
    printf("Test 9: %s\n", result9 ? result9 : "NULL");

    char *result10 = ft_strnstr("abababab", "abab", 8);
    printf("Test 10: %s\n", result10 ? result10 : "NULL");

    char *result11 = ft_strnstr("hello world", "hello", 0);
    printf("Test 11: %s\n", result11 ? result11 : "NULL");

    char *result12 = ft_strnstr("identical", "identical", 9);
    printf("Test 12: %s\n", result12 ? result12 : "NULL");

    char *result13 = ft_strnstr("abcdef", "def", 6);
    printf("Test 13: %s\n", result13 ? result13 : "NULL");

    return 0;
}
*/