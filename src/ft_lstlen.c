/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 02:30:30 by rdutenke          #+#    #+#             */
/*   Updated: 2021/07/07 22:18:05 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_lstlen(t_stack	*s)
{
	int			len;
	t_stack		*n;

	if (s == NULL)
		return (0);
	len = 0;
	n = s;
	while (n != NULL)
	{
		len++;
		n = n->next;
	}
	return (len);
}
