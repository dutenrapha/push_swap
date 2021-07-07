/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 01:09:32 by rdutenke          #+#    #+#             */
/*   Updated: 2021/06/20 20:58:25 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_sawp.h"

void	ft_push(t_stack	**dst, t_stack	**src)
{
	ft_add_front(dst, (*src)->data);
	ft_delete_first(src);
}

void	ft_push_a(t_solution **s, t_stack **a, t_stack **b, int i)
{
	int	j;

	j = 0;
	while (j < i)
	{
		ft_push(a,b);
		ft_add_solution(s, "pa");
		j++;
	}
}

void	ft_push_b(t_solution **s, t_stack **a, t_stack **b, int i)
{
	int	j;

	j = 0;
	while (j < i)
	{
		ft_push(a,b);
		ft_add_solution(s, "pb");
		j++;
	}
}