/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaksiss <soufianmaksiss@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 08:29:23 by smaksiss          #+#    #+#             */
/*   Updated: 2024/09/01 08:29:23 by smaksiss         ###   ########.ma       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	while (i > 0 && s[i] != c)
		i--;
	if (s[i] == c)
		return ((char *)&s[i]);
	return (NULL);
}
/*
int main()
{
	printf("\"%s\"\n",ft_strrchr("hellohexxo",'l'));
	printf("\"%s\"\n",ft_strrchr("hellohexxo",'\n'));
	printf("\"%s\"\n",ft_strrchr("hellohexxo",'x'));
	printf("\"%s\"\n",ft_strrchr("hello",'x'));
}
*/