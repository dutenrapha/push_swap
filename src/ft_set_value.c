/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_value.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 20:48:14 by rdutenke          #+#    #+#             */
/*   Updated: 2021/07/07 22:18:47 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_set_value(t_stack **a, int position, int value)
{
	int		i;
	t_stack	*n;

	i = 0;
	n = *a;
	while (i < position)
	{
		n = n->next;
		i++;
	}
	n->data = value;
}
