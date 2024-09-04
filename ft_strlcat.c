/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaksiss <soufianmaksiss@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 20:50:51 by smaksiss          #+#    #+#             */
/*   Updated: 2024/08/31 20:50:51 by smaksiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dlen;
	size_t	slen;

	i = 0;
	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	if (size <= dlen)
		return (slen + size);
	while (i < size - dlen + 1 && *src)
		dst[dlen + i++] = *(src++);
	dst[dlen + i] = '\0';
	return (dlen + slen);
}
/*
int main()
{
	char dest[10] = "hello";
	printf("%ld\n",ft_strlcat(dest,NULL,10));
	printf("%s\n",dest);
}
*/