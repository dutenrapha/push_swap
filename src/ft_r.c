/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_r.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 03:22:01 by rdutenke          #+#    #+#             */
/*   Updated: 2021/06/20 03:00:32 by rdutenke         ###   ########.fr       */
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

int	ft_r_x(t_solution **s, t_stack **x, int i, char *step)
{
	int	j;

	j = 0;
	while (j < i)
	{
		ft_r(x);
		ft_add_solution(s, step);
		j++;
	}
	return (j);
}