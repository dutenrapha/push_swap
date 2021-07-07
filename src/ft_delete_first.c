/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_delete_first.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 01:14:22 by rdutenke          #+#    #+#             */
/*   Updated: 2021/07/07 22:17:18 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_delete_first(t_stack	**s)
{
	t_stack	*to_delete;

	if (*s != NULL)
	{
		to_delete = *s;
		*s = (*s)->next;
		free(to_delete);
	}
}
