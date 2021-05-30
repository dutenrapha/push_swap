/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_insertion_sort.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 01:00:08 by rdutenke          #+#    #+#             */
/*   Updated: 2021/05/30 03:09:46 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_sawp.h"

t_solution	*ft_insertion_sort(t_stack	*a, int len)
{
	t_solution	*s;
	t_stack		*b;
	int			i;

	b = NULL;
	s = NULL;
	i = 0;
	while (i < len)
	{
		if (a->data > a->next->data)
		{
			ft_swap(&a);
			ft_add_solution(&s,"sa");
		}
		i++;
		ft_push(&b,&a);
		ft_add_solution(&s,"pb");
	}
	return (s);
}