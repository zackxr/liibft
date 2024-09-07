/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaksiss <soufianmaksiss@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 18:58:23 by smaksiss          #+#    #+#             */
/*   Updated: 2024/09/07 18:58:23 by smaksiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while(lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}
/*
int main()
{
	t_list *ptr = malloc (sizeof (t_list));
	ptr->next = NULL;
	t_list *pt = malloc (sizeof(t_list));
	pt->next = NULL;
	ptr->next = pt;
	printf("%d",ft_lstsize(ptr));
}
*/