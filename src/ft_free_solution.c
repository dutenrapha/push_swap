/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_solution.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 21:21:03 by rdutenke          #+#    #+#             */
/*   Updated: 2021/07/07 22:17:26 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_free_solution(t_solution **s)
{
	t_solution	*to_delete;

	while (*s != NULL)
	{
		to_delete = *s;
		*s = (*s)->next;
		free(to_delete);
	}
}
