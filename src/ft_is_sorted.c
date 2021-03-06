/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sorted.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 18:39:50 by rdutenke          #+#    #+#             */
/*   Updated: 2021/07/19 16:30:51 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

bool	ft_is_sorted(t_stack **a)
{
	t_stack	*n;

	n = *a;
	if (*a == NULL)
		return (true);
	while (n->next != NULL)
	{
		if (n->data > n->next->data)
			return (false);
		n = n->next;
	}
	return (true);
}
