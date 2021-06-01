/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 02:11:48 by rdutenke          #+#    #+#             */
/*   Updated: 2021/06/01 02:52:16 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_sawp.h"

void	sawp(t_solution **s, t_stack **a, int position)
{
	int		i;
	t_stack	*b;

	b = NULL;
	i = 0;
	while (i < position - 1)
	{
		ft_push(&b, a);
		ft_add_solution(s,"pb");
		i++;
	}
	ft_swap(a);
	ft_add_solution(s,"sa");
	i = 0;
	while (i < position - 1)
	{
		ft_push(a, &b);
		ft_add_solution(s,"pa");
		i++;
	}
}