/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaksiss <soufianmaksiss@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 14:38:37 by smaksiss          #+#    #+#             */
/*   Updated: 2024/08/31 14:38:37 by smaksiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t		i;
	const char	*str;
	char		*ptr;

	i = 0;
	str = src;
	ptr = dest;
	if (!dest || !src)
		return (NULL);
	while (i < n && *(str) != c)
	{
		if (*(str) == c)
			return (ptr + i);
		ptr[i++] = *(str++);
	}
	return (NULL);
}
/*
int main() {
    char src[] = "hello, world!";
    char dest[20];

    char *result = memccpy(dest, src, 'o', sizeof(dest));
    if (result != NULL) {
        printf("Copied until 'o': %s\n", dest);
    } else {
        printf("Character 'o' not found\n");
    }

	char src1[] = "hello, world!";
    char dest1[20];
    result = memccpy(dest1, src1, 'z', sizeof(dest1));
    if (result != NULL) {
        printf("Copied until 'z': %s\n", dest1);
    } else {
        printf("Character 'z' not found\n");
    }

	char src2[] = "hello, world!";
    char dest2[20];
    result = memccpy(dest2, src2, 'o', 0);
    if (result != NULL) {
        printf("Copied until 'o': %s\n", dest2);
    } else {
        printf("Character 'o' not found\n");
    }

	char src3[] = "hello, world!";
    char dest3[20];
    result = memccpy(dest3, src3, 'o', sizeof(dest3));
    if (result != NULL) {
        printf("Copied until 'o': %s\n", dest3);
    } else {
        printf("Character 'o' not found\n");
    }

    return 0;
}
*/