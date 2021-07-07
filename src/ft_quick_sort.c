/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quick_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 22:01:19 by rdutenke          #+#    #+#             */
/*   Updated: 2021/07/05 21:13:21 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_sawp.h"

static int	partition(t_solution **s, t_stack **a, int end)
{
	t_stack	*b;
	int		pivot;
	int		i;
	int		temp;

	b = NULL;
	pivot = ft_get_value(*a, end);
	i = 0;
	while (i <= end)
	{
		temp = ft_get_value(*a, 0);
		if (temp <= pivot)
		{
			ft_push(&b,a);
			ft_add_solution(s,"pb");
		}
		else
		{
			ft_r(a);
			ft_add_solution(s,"ra");
		}
		i++;
	}
	ft_r_x(s, a, (*s)->next_to_sort, "ra");
	while (ft_lstlen(b) > 0)
	{
		temp = ft_get_value(b, 0);
		ft_push(a,&b);
		ft_add_solution(s,"pa");
		if (temp == (*s)->next_to_sort)
		{
			ft_r(a);
			ft_add_solution(s,"ra");
			(*s)->next_to_sort += 1;
		}
	}
	return ((*s)->next_to_sort);
}

void	ft_quick_sort(t_solution **s, t_stack **a, int end, int size)
{
	int	p;


	if (!ft_is_sorted(a))
	{
		p = partition(s, a, end);
		ft_quick_sort(s, a, size - p, size);
	}
	//ft_print_list(*a);
}
