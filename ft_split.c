/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaksiss <soufianmaksiss@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 16:18:39 by smaksiss          #+#    #+#             */
/*   Updated: 2024/09/05 16:18:39 by smaksiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count(char const *s,char c)
{
	size_t	i;
	size_t	count;
	size_t	flag;

	flag = 1;
	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && flag == 1)
		{
			flag = 0;
			count++;
		}
		if (s[i] == c)
			flag = 1;
		i++;
	}
	return count;
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char **ptr;

	ptr = malloc (sizeof(char *) * count(s,c) + 1);
	i = 0;
	k = 0;
	j = 0;
	if (ptr == NULL)
		return (NULL);
	while (s[i])
	{
		if (s[i] == c)
			i++;
		while (s[i + j] != c && s[i])
			j++;
		ptr[k] = malloc (j + 1);
		j = 0;
		if (ptr[k] == NULL)
			return (NULL);
		while (s[i] != c && s[i])
			ptr[k][j++] = s[i++];
		ptr[k][j] = '\0';
		k++;
	}
	ptr[k] == NULL;
	return (ptr);
}
int main()
{
	char str[] = " hello world iam here ";
	char **ptr = ft_split(str,' ');
	if (*ptr == NULL)
		printf("null");
	else
	{
		while (*ptr)
			printf("%s\n",*(ptr++));
	}
} 

not terminated hh;