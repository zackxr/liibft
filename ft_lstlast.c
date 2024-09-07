/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaksiss <soufianmaksiss@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 19:03:02 by smaksiss          #+#    #+#             */
/*   Updated: 2024/09/07 19:03:02 by smaksiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
	t_list	*ptr;

	ptr = lst;
	while (ptr->next)
		ptr = ptr->next;
	return (lst);
}
/*
int main()
{
	t_list *ptr = malloc (sizeof (t_list));
	ptr->next = NULL;
	t_list *pt = malloc (sizeof(t_list));
	pt->next = NULL;
	ptr->next = pt;
	ptr->content = (char *)"hello";

	t_list *t = ft_lstlast(ptr);
	printf("%s\n",(char *)t->content);
}
*/