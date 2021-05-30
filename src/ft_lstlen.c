/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 02:30:30 by rdutenke          #+#    #+#             */
/*   Updated: 2021/05/30 02:36:01 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_sawp.h"

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