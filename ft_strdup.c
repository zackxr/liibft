/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaksiss <soufianmaksiss@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 21:01:06 by smaksiss          #+#    #+#             */
/*   Updated: 2024/09/02 21:01:06 by smaksiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s)
{
	char	*ptr;
	size_t	i;

	ptr = malloc (sizeof(char) * strlen(s) + 1);///////////////////////////////////////
	i = 0;
	while (*s)
		ptr[i++] = *(s++);
	ptr[i] = '\0';
	return (ptr);
}

int main()
{
	printf("%s",ft_strdup("hello iam here"));
}
