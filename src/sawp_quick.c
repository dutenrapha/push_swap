/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sawp_quick.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 00:22:39 by rdutenke          #+#    #+#             */
/*   Updated: 2021/06/18 05:09:39 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_sawp.h"

void	sawp_quick(t_solution **s, t_stack **a, int i, int j)
{
	int	ii;
	t_stack	*b;

	b = NULL;
	ii = 0;
	if (i == j)
		return ;
	while (ii < i)
	{
		ft_r(a);
		ft_add_solution(s,"ra");
		ii++;
	}
	ft_push(&b, a);
	ft_add_solution(s,"pb");
	ii = 0;
	while (ii < (j - i - 1))
	{
		ft_r(a);
		ft_add_solution(s,"ra");
		ii++;
	}
	ft_push(&b, a);
	ft_add_solution(s,"pb");
	ft_swap(&b);
	ft_add_solution(s,"sb");
	ft_push(a, &b);
	ft_add_solution(s,"pa");
	ii = 0;
	while (ii < (j - i - 1))
	{
		ft_rr(a);
		ft_add_solution(s,"rra");
		ii++;
	}
	ft_push(a, &b);
	ft_add_solution(s,"pa");
	ii = 0;
	while (ii < i)
	{
		ft_rr(a);
		ft_add_solution(s,"rra");
		ii++;
	}
}
