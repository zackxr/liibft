/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaksiss <soufianmaksiss@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 20:26:39 by smaksiss          #+#    #+#             */
/*   Updated: 2024/09/02 20:26:39 by smaksiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*ptr;
	size_t	i;

	i = 0;
	ptr = malloc(size * nmemb);
	while (i < nmemb)
		ptr[i++] = '0';
	return ((void *)(ptr));
}

int main()
{
	char *ptr = ft_calloc(5,1);
	printf("%s",ptr);
}