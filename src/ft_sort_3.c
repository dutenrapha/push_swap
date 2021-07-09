/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 19:50:48 by rdutenke          #+#    #+#             */
/*   Updated: 2021/07/08 21:18:10 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_sort_3(t_solution **s, t_stack **a)
{
	if (ft_is_sorted(a))
		return ;
	if (ft_get_value(*a, 0) > ft_get_value(*a, 1))
	{
		if (ft_get_value(*a, 1) > ft_get_value(*a, 2))
		{
			case2(s, a);
		}
		else
		{
			if (ft_get_value(*a, 2) > ft_get_value(*a, 0))
				case1(s, a);
			else
				case3(s, a);
		}
	}
	else
	{
		if (ft_get_value(*a, 2) > ft_get_value(*a, 0))
			case4(s, a);
		else
			case5(s, a);
	}
}
