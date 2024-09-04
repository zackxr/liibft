/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaksiss <soufianmaksiss@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 14:25:29 by smaksiss          #+#    #+#             */
/*   Updated: 2024/08/31 14:25:29 by smaksiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const char	*str;
	char		*ptr;
	size_t		i;

	i = 0;
	str = src;
	ptr = dest;
	if (!src || !dest)
		return (NULL);
	while (i < n)
		ptr[i++] = *(str++);
	ptr[i] = '\0';
	return (ptr);
}
/*
int main()
{
	char dest[20];
	char *str = ft_memcpy(dest,"hi",4);
	printf("\"%s\"\n",str);

	char dest1[10];
	char *str1 = ft_memcpy(NULL,"hi iam here",4);
	printf("\"%s\"\n",str1);

	char dest3[10];
	char *str2 = ft_memcpy(dest3,NULL,20);
	printf("\"%s\"\n",str2);
}
*/