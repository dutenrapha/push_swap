/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_front.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 01:51:54 by rdutenke          #+#    #+#             */
/*   Updated: 2021/07/07 21:30:51 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_sawp.h"

void	ft_add_front(t_stack **head, int data)
{
	t_stack	*n;
	t_stack	*add;

	if (*head == NULL)
	{
		*head = ft_lst_new(data);
	}
	else
	{
		add = (t_stack *)malloc(sizeof(t_stack));
		add->data = data;
		add->next = NULL;
		n = *head;
		while (n->next != NULL)
			n = n->next;
		n->next = add;
		ft_rotate(head, data);
	}
}
