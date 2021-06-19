/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_insertion_sort.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 01:00:08 by rdutenke          #+#    #+#             */
/*   Updated: 2021/06/19 03:26:14 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_sawp.h"

void	ft_insertion_sort(t_solution **s, t_stack *a, int len)
{
	int			i;
	int			j;

	i = 1;
	*s = NULL;
	while (i < len)
	{
		j = i;
		while (j > 0 && ft_get_value(a, j - 1) > ft_get_value(a, j))
		{
			sawp(s, &a, j);
			j--;
		}
		i++;
	}
	// ft_print_list(a);
	// ft_printf("\n");
}