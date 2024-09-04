/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaksiss <soufianmaksiss@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 15:32:37 by smaksiss          #+#    #+#             */
/*   Updated: 2024/08/31 15:32:37 by smaksiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t		i;
	const char	*dest;
	const char	*src;

	dest = s1;
	src = s2;
	i = 0;
	while (i < n)
	{
		if (dest[i] != src[i])
			return (dest[i] - src[i]);
		i++;
	}
	return (0);
}
/*
int main()
{
	const char s1[] = "H";
	const char s2[] = "hejllo";
	printf("%d\n",ft_memcmp(s1,s2,5));

	const char s3[] = "h";
	const char ss[] = "Hejllo";
	printf("%d\n",ft_memcmp(s3,ss,5));

	const char cc[] =  "";
	const char gcc[] = "hejllo";
	printf("%d\n",ft_memcmp(cc,gcc,10));

	const char ccc[] =  "hell";
	const char bcc[] = "";
	printf("%d\n",ft_memcmp(ccc,bcc,10));
}
*/