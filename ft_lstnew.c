/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaksiss <soufianmaksiss@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 18:53:45 by smaksiss          #+#    #+#             */
/*   Updated: 2024/09/07 18:53:45 by smaksiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
	t_list	ptr;

	ptr = malloc (sizeof(t_list));
	ptr->content = content;
	ptr->next = NULL;
	return (ptr);
}