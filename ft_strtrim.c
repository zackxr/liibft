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

char *ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*ptr;

	i = 0;
	j = 0;
	while (s1[i] == set[i])
		i++;
	while (s1[i + j] != set[0])
		j++;
	ptr = malloc(j + 1);
	j = 0;
	while (s1[i] != set[0])
		ptr[j++] = s1[i++];
	return ptr;
}

int main()
{
	printf("%s\n",strtrim(" he llo "," "));
}
////////////////////////////////////////////////
// not finisheddd haha