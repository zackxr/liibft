/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaksiss <soufianmaksiss@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 19:07:48 by smaksiss          #+#    #+#             */
/*   Updated: 2024/09/07 19:07:48 by smaksiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ptr;

	ptr = *lst;
	while (ptr->next)
		ptr = ptr->next;
	ptr->next = new;
}
/*
int main()
{
	t_list *ptr = malloc (sizeof (t_list));
	ptr->content = "hehe";
	ptr->next = NULL;

	t_list *pt = malloc (sizeof(t_list));
	pt->content = "he  h  he";
	pt->next = NULL;
	ptr->next = pt;

	t_list *iam = malloc (sizeof(t_list));
	iam->next = NULL;
	iam->content = "he   he";

	ft_lstadd_back(&ptr,iam);
	while (ptr)
{		printf("%s\n",(char *)ptr->content);
		ptr = ptr->next;
}
}
*/