/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 22:56:01 by rdutenke          #+#    #+#             */
/*   Updated: 2021/06/01 00:54:34 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_sawp.h"

void	ft_print_list(t_stack *n)
{
	while (n != NULL) {
		ft_printf("%d\n", n->data);
		n = n->next;
	}
}