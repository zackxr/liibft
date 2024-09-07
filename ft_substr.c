/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaksiss <soufianmaksiss@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 12:46:36 by smaksiss          #+#    #+#             */
/*   Updated: 2024/09/05 12:46:36 by smaksiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;

	i = 0;
	ptr = malloc (len - start + 1);
	if (!ptr || !s)
		return (NULL);
	while (start <= len)
		ptr[i++] = s[start++];
	ptr[i] = '\0';
	return (ptr);
}
/*
int main()
{
	printf("%s\n",ft_substr("hello",2,5));

	printf("%p\n",ft_substr(NULL,2,5));

	printf("%p\n",ft_substr("hello",5,2));
}
*/