/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltesha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 22:53:59 by ltesha            #+#    #+#             */
/*   Updated: 2019/07/17 15:04:37 by ltesha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *head;

	if (!*begin_list)
		*begin_list = ft_create_elem(data);
	else
	{
		head = *begin_list;
		while ((*begin_list)->next)
			*begin_list = (*begin_list)->next;
		(*begin_list)->next = ft_create_elem(data);
		(*begin_list)->next->next = 0;
		(*begin_list)->next->data = data;
		*begin_list = head;
	}
}
