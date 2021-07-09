/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 01:02:39 by rdutenke          #+#    #+#             */
/*   Updated: 2021/07/08 20:24:45 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_swap(t_stack **s)
{
	int	temp;

	temp = (*s)->data;
	(*s)->data = (*s)->next->data;
	(*s)->next->data = temp;
}
