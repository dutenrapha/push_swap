/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_r.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 03:22:01 by rdutenke          #+#    #+#             */
/*   Updated: 2021/06/18 03:37:51 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_sawp.h"

void	ft_r(t_stack **head)
{
	t_stack	*n;
	int		last;

	last = ft_get_value(*head, 0);
	n = *head;
	while (n != NULL)
	{
		if (n->next == NULL)
			n->data = last;
		else
			n->data = n->next->data;
		n = n->next;
	}
}