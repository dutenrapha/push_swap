/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_back.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 23:06:43 by rdutenke          #+#    #+#             */
/*   Updated: 2021/07/07 21:30:42 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_sawp.h"

void	ft_add_back(t_stack **head, int data)
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
	}
}
