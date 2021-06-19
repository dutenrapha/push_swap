/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 02:56:53 by rdutenke          #+#    #+#             */
/*   Updated: 2021/06/18 03:30:22 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_sawp.h"

void	ft_rr(t_stack **head)
{
	t_stack	*n;
	int		temp;
	int		point;

	point = ft_get_value(*head, ft_lstlen(*head) - 1);
	n = *head;
	while (n != NULL)
	{
		temp = n->data;
		n->data = point;
		point = temp;
		n = n->next;
	}
}