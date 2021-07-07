/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_value.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 01:43:53 by rdutenke          #+#    #+#             */
/*   Updated: 2021/07/07 22:17:38 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_get_value(t_stack *s, int position)
{
	int	resp;
	int	i;

	i = 0;
	while (s != NULL)
	{
		if (i == position)
		{
			resp = s->data;
			break ;
		}
		i++;
		s = s->next;
	}
	return (resp);
}
