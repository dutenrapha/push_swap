/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 02:04:22 by rdutenke          #+#    #+#             */
/*   Updated: 2021/07/07 22:18:41 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_rotate(t_stack **head, int point)
{
	t_stack	*n;
	int		temp;

	n = *head;
	while (n != NULL)
	{
		temp = n->data;
		n->data = point;
		point = temp;
		n = n->next;
	}
}
