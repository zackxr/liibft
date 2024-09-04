/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaksiss <soufianmaksiss@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 12:41:07 by smaksiss          #+#    #+#             */
/*   Updated: 2024/08/31 12:41:07 by smaksiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*ptr;
	size_t	i;

	ptr = s;
	i = 0;
	while (i < n)
		ptr[i++] = c;
	return (s);
}
/*
int main() {
	char str[] = "hello bro";
	printf("string origine : %s\n",str);
	char *ptr = ft_memset(str,'a',5);
	printf("new string : 	 %s\n\n",ptr);

	char str0[] = "hello bro";
	printf("string origine : %s\n",str0);
	char *ptr0 = ft_memset(str0,'b',20);
	printf("new string : 	 %s\n\n",ptr0);

	char str1[] = "";
	printf("string origine : %s\n",str1);
	char *ptr1 = ft_memset(str1,'c',5);
	printf("new string : 	 %s\n\n",ptr1);

	char str2[] = "hello bro";
	printf("string origine : %s\n",str2);
	char *ptr2 = ft_memset(str2,'c',0);
	printf("new string : 	 %s\n\n",ptr2);
    return 0;
}
*/