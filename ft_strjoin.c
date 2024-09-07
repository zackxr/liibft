/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaksiss <soufianmaksiss@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 13:08:35 by smaksiss          #+#    #+#             */
/*   Updated: 2024/09/05 13:08:35 by smaksiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	dlen;
	size_t	slen;
	size_t	i;
	char	*ptr;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	dlen = ft_strlen(s1);/////////////////////////////
	slen = ft_strlen(s2);/////////////////////////////
	ptr = malloc(dlen + slen + 1);
	if (!ptr)
		return (NULL);
	while (*s1)
		ptr[i++] = *(s1++);
	while (*s2)
		ptr[i++] = *(s2++);
	ptr[i] = '\0';
	return (ptr);
}
/*
int main()
{
	printf("%s\n",ft_strjoin("hello","hi"));

	char *str = ft_strjoin(NULL,"hh");
	if (str == NULL)
		printf("null\n");
	if (ft_strjoin("jj",NULL) == NULL)
		printf("null\n");
}
*/