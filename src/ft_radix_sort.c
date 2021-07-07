/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_radix_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 19:07:31 by rdutenke          #+#    #+#             */
/*   Updated: 2021/07/07 20:12:06 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_sawp.h"

static int ft_maxbits(int max_num)
{
	int	max_bits;

	max_bits = 0;
	while ((max_num >> max_bits) != 0)
	{
		max_bits++;
	}
	return (max_bits);
}

void	ft_radix_sort(t_solution **s, t_stack **a)
{
	int	max_bits;
	int	i;
	int	j;
	int	size;
	int	num;
	t_stack	*b;

	b = NULL;
	size = ft_lstlen(*a);
	max_bits = ft_maxbits(size - 1);
	i = 0;
	while (i < max_bits)
	{
		j = 0;
		while (j < size)
		{
			num = ft_get_value(*a, 0);
			if (((num >> i) & 1) == 1)
			{
				ft_r(a);
				ft_add_solution(s,"ra");
			}
			else
			{
				ft_push(&b, a);
				ft_add_solution(s,"pb");
			}
			j++;
		}
		i++;
		while (ft_lstlen(b) != 0)
		{
			ft_push(a, &b);
			ft_add_solution(s,"pa");
		}
	}
}