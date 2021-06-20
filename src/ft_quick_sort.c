/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quick_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 22:01:19 by rdutenke          #+#    #+#             */
/*   Updated: 2021/06/20 04:05:14 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_sawp.h"

static int	partition(t_solution **s, t_stack **a, int init, int end)
{
	int	pivot;
	int	i;
	int	j;
	int	temp;

	i = init;
	j = i;
	pivot = ft_get_value(*a, end);
	while (j < end)
	{
		temp = ft_get_value(*a, j);
		if (temp < pivot)
		{
			sawp_quick(s, a, ft_get_value(*a, i), temp);
			i++;
		}
		j++;
	}
	sawp_quick(s, a, ft_get_value(*a, i), ft_get_value(*a, end));
	return (i);
}

void	ft_quick_sort(t_solution **s, t_stack **a, int init, int end)
{
	int	p;

	if (init < end)
	{
		p = partition(s, a, init, end);
		ft_quick_sort(s, a, init, p - 1);
		ft_quick_sort(s, a, p + 1, end);
	}
	//ft_print_list(*a);
	//ft_printf("\n");
}

