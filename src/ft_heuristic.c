/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_heuristic.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 22:58:36 by rdutenke          #+#    #+#             */
/*   Updated: 2021/07/06 23:27:17 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_sawp.h"

static void	ft_move_top(t_solution **s, t_stack **a, t_stack **b,int index)
{
	ft_r_x(s, a, index, "ra");
	ft_push(b,a);
	ft_add_solution(s, "pb");
}

static void	ft_move_down(t_solution **s, t_stack **a, t_stack **b,int index)
{
	ft_rr_x(s, a, index, "rra");
	ft_push(b,a);
	ft_add_solution(s, "pb");
}

void	ft_heuristic(t_solution **s, t_stack **a)
{
	int	index;
	int	middle;
	int	i;
	t_stack	*b;

	b = NULL;
	i = 0;
	while (ft_lstlen(*a) != 0)
	{
		middle = ft_lstlen(*a)/2;
		index = ft_get_index(*a, i);
		if (index <= middle)
			ft_move_top(s, a, &b, index);
		else
			ft_move_down(s, a, &b, ft_lstlen(*a) - index);
		i++;
	}
	ft_push_a(s,a, &b, ft_lstlen(b));
}
