/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaksiss <soufianmaksiss@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 15:15:26 by smaksiss          #+#    #+#             */
/*   Updated: 2024/08/31 15:15:26 by smaksiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*ptr;

	i = 0;
	ptr = s;
	if (!s)
		return (NULL);
	while (i < n)
	{
		if (ptr[i] == c)
			return ((char *)&ptr[i]);
		i++;
	}
	return (NULL);
}
/*
int main()
{
    char str[] = "hello, world!";
    char c = 'o';
    size_t n;

    // Basic cases
    char *result = ft_memchr(str, c, strlen(str));
    if (result != NULL) {
        printf("Found '%c' at index %zu\n", c, result - str);
    } else {
        printf("'%c' not found\n", c);
    }

    // Edge cases
    result = ft_memchr(str, 'l', strlen(str));
    if (result != NULL) {
        printf("Found 'l' at index %zu\n", result - str);
    } else {
        printf("'l' not found\n");
    }

    // ... (more test cases)

    return 0;
}
*/