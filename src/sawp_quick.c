/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sawp_quick.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 00:22:39 by rdutenke          #+#    #+#             */
/*   Updated: 2021/06/20 03:46:57 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_sawp.h"

static bool	ft_up(t_stack **a, int i)
{
	if (ft_get_index(*a, i) >= ft_lstlen(*a) / 2)
		return false;
	else
		return true;
}

static int	to_b(t_solution **s, t_stack **a, t_stack **b, int value)
{
	int index;
	int resp;

	resp = 0;
	index = ft_get_index(*a, value);
	if (ft_up(a, value))
	{
		resp = ft_r_x(s, a, index, "ra");
	}
	else
	{
		resp = ft_rr_x(s, a, ft_lstlen(*a) - index, "rra");
		resp *= -1;
	}
	ft_push(b, a);
	ft_add_solution(s, "pb");
	return (resp);
}

static int	to_a(t_solution **s, t_stack **a, t_stack **b, int index)
{
	int	resp;

	resp = 0;
	ft_push(a, b);
	ft_add_solution(s, "pa");
	if (index > 0)
	{
		resp = ft_rr_x(s, a, index, "rra");
	}
	else
	{
		resp *= -1;
		resp = ft_r_x(s, a, ft_lstlen(*a) - index, "ra");
	}
	return (resp);
}

void	sawp_quick(t_solution **s, t_stack **a, int i, int j)
{
	t_stack	*b;
	int	index_i;
	int	index_j;

	if (i == j)
		return ;
	b = NULL;
	index_i = to_b(s, a, &b, i);
	index_j = to_b(s, a, &b, j);
	ft_swap(&b);
	ft_add_solution(s, "sb");
	to_a(s, a, &b, index_j);
	to_a(s, a, &b, index_i);
}
