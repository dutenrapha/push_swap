/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_radix_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 19:07:31 by rdutenke          #+#    #+#             */
/*   Updated: 2021/07/07 21:54:15 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_sawp.h"

static int	ft_maxbits(int max_num)
{
	int	max_bits;

	max_bits = 0;
	while ((max_num >> max_bits) != 0)
	{
		max_bits++;
	}
	return (max_bits);
}

static void	ft_init(t_stack **b, int *size, int *max_bits, t_stack *a)
{
	*b = NULL;
	*size = ft_lstlen(a);
	*max_bits = ft_maxbits(*size - 1);
}

static void	ft_evaluate(t_solution **s, t_stack **a, t_stack **b, int i)
{
	if (((ft_get_value(*a, 0) >> i) & 1) == 1)
	{
		ft_r(a);
		ft_add_solution(s, "ra");
	}
	else
	{
		ft_push(b, a);
		ft_add_solution(s, "pb");
	}
}

void	ft_radix_sort(t_solution **s, t_stack **a)
{
	int		max_bits;
	int		i;
	int		j;
	int		size;
	t_stack	*b;

	ft_init(&b, &size, &max_bits, *a);
	i = -1;
	while (++i < max_bits)
	{
		j = -1;
		while (++j < size)
		{
			ft_evaluate(s, a, &b, i);
		}
		while (ft_lstlen(b) != 0)
		{
			ft_push(a, &b);
			ft_add_solution(s, "pa");
		}
	}
}
