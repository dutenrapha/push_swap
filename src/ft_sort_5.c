/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_5.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 20:30:50 by rdutenke          #+#    #+#             */
/*   Updated: 2021/07/09 01:34:05 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static void	ft_push_min1(t_solution **s, t_stack **a, t_stack **b, int pos)
{
	if (pos <= 2)
	{
		while (pos)
		{
			ft_r(a);
			ft_add_solution(s, "ra");
			pos--;
		}
		ft_push(b, a);
		ft_add_solution(s, "pb");
	}
	else
	{
		while (5 - pos)
		{
			ft_rr(a);
			ft_add_solution(s, "rra");
			pos++;
		}
		ft_push(b, a);
		ft_add_solution(s, "pb");
	}
}

static void	ft_push_min2(t_solution **s, t_stack **a, t_stack **b, int pos)
{
	if (pos <= 2)
	{
		while (pos)
		{
			ft_r(a);
			ft_add_solution(s, "ra");
			pos--;
		}
		ft_push(b, a);
		ft_add_solution(s, "pb");
	}
	else
	{
		while (4 - pos)
		{
			ft_rr(a);
			ft_add_solution(s, "rra");
			pos++;
		}
		ft_push(b, a);
		ft_add_solution(s, "pb");
	}
}

void	ft_sort_5(t_solution **s, t_stack **a)
{
	t_stack	*b;
	int		pos;

	if (ft_is_sorted(a))
		return ;
	b = NULL;
	pos = ft_get_index(*a, 0);
	ft_push_min1(s, a, &b, pos);
	pos = ft_get_index(*a, 1);
	ft_push_min2(s, a, &b, pos);
	ft_sort_3(s, a);
	ft_push(a, &b);
	ft_add_solution(s, "pa");
	ft_push(a, &b);
	ft_add_solution(s, "pa");
}
