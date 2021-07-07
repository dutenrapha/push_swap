/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_relabel.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 20:27:46 by rdutenke          #+#    #+#             */
/*   Updated: 2021/07/07 22:18:36 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_relabel(t_stack **a, t_stack *b)
{
	int	i;
	int	j;
	int	size;

	ft_simple_sort(b, 0, ft_lstlen(b) - 1);
	i = 0;
	size = ft_lstlen(b);
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (ft_get_value(*a, i) == ft_get_value(b, j))
			{
				ft_set_value(a, i, j);
				break ;
			}
			j++;
		}
		i++;
	}
}
