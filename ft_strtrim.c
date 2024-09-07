/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaksiss <soufianmaksiss@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 13:20:50 by smaksiss          #+#    #+#             */
/*   Updated: 2024/09/05 13:20:50 by smaksiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check (char str, char const *set)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == set)
			return (1);
	}
	return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*ptr;

	i = 0;
	j = strlen(s1);
	while (s1[i] && ft_check(s1[i],set))
		i++;
	while ((s1[j] == set[0]) && ft_check(s1[j],set))
		j--;
	ptr = malloc(strlen(s1) + 1);
	j = 0;
	while (s1[i] != set[0])
		ptr[j++] = s1[i++];
	return ptr;
}

int main()
{
	printf("%s\n",ft_strtrim(" he llo "," "));
}
////////////////////////////////////////////////
// not finisheddd haha