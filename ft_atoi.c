/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaksiss <soufianmaksiss@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 14:37:57 by smaksiss          #+#    #+#             */
/*   Updated: 2024/09/01 14:37:57 by smaksiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	size_t	i;
	size_t	mines;
	int		nb;

	i = 0;
	mines = 1;
	nb = 0;
	while (nptr[i] <= 32)
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			mines *= -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
		nb = nb * 10 + (nptr[i++] - '0');
	return (nb * mines);
}
/*
int main()
{
	printf("%d\n",ft_atoi("-2147483648"));
	printf("%d\n",ft_atoi("-42"));
	printf("%d\n",ft_atoi("42"));
	printf("%d\n",ft_atoi("1337"));
	printf("%d\n",ft_atoi("-1337"));
	printf("%d\n",ft_atoi("0"));
	printf("%d\n",ft_atoi("2147483647"));
}
*/