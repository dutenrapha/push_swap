/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_duplicate.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 21:03:47 by rdutenke          #+#    #+#             */
/*   Updated: 2021/07/19 21:58:19 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

bool	ft_error_duplicate(t_stack *s, char *value)
{
	int		duplicate;
	t_stack	*n;

	duplicate = 0;
	n = s;
	while (n != NULL)
	{
		if (n->data == ft_atoi(value))
			duplicate++;
		n = n->next;
	}
	if (duplicate >= 1)
		return (1);
	return (0);
}
