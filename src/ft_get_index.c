/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_index.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 01:39:55 by rdutenke          #+#    #+#             */
/*   Updated: 2021/07/09 00:06:01 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_get_index(t_stack *s, int value)
{
	int	position;
	int	i;

	i = 0;
	position = -1;
	while (s != NULL)
	{
		if (s->data == value)
		{
			position = i;
			break ;
		}
		i++;
		s = s->next;
	}
	return (position);
}
