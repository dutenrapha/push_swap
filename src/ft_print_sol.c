/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_sol.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 00:54:24 by rdutenke          #+#    #+#             */
/*   Updated: 2021/07/07 21:34:51 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_sawp.h"

void	ft_print_sol(t_solution *n)
{
	while (n != NULL)
	{
		ft_printf("%s\n", n->step);
		n = n->next;
	}
}
