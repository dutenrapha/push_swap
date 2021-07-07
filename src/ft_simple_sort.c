/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_simple_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 19:34:02 by rdutenke          #+#    #+#             */
/*   Updated: 2021/07/05 20:51:57 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_sawp.h"

static void ft_simple_swap(t_stack **a, int i, int j)
{
	int	temp;
	int	k;
	t_stack *n;

	if (i == j)
		return;
	temp = ft_get_value(*a, i);
	n = *a;
	k = 0;
	while (k < i)
	{
		n = n->next;
		k++;
	}
	n->data = ft_get_value(*a, j);
	n = *a;
	k = 0;
	while (k < j)
	{
		n = n->next;
		k++;
	}
	n->data = temp;
}

static int partition(t_stack **a, int init, int end)
{
	int	pivot;
	int	i;
	int	j;

	i = init;
	j = init;
	pivot = ft_get_value(*a, end);
	while (j < end)
	{
		if (ft_get_value(*a, j) <= pivot)
		{
			ft_simple_swap(a, i, j);
			i++;
		}
		j++;
	}
	ft_simple_swap(a, i, end);
	return (i);
}

void	ft_simple_sort(t_stack *a, int init, int end)
{
	int	p;
	t_stack *b;

	b = a;
	if (init < end)
	{
		p = partition(&b, init, end);
		ft_simple_sort(a, init, p - 1);
		ft_simple_sort(a, p + 1, end);
	}
}