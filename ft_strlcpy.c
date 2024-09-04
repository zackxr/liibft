/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaksiss <soufianmaksiss@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 16:33:58 by smaksiss          #+#    #+#             */
/*   Updated: 2024/08/31 16:33:58 by smaksiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (src && size)
	{
		while (i < size - 1 && *src)
			dst[i++] = *(src++);
		dst[i] = '\0';
	}
	return (i);
}
/*
int main()
{
	char dst[20];
	printf("%ld\n",ft_strlcpy(dst,"hello",20));
	char dest[20];
	printf("%ld\n",ft_strlcpy(dest,NULL,20));
	printf("%s\n",dest);
	char src[20];
	printf("%ld\n",ft_strlcpy(src,"1234567890123456789000",23));
	printf("%s\n",src);
}
*/