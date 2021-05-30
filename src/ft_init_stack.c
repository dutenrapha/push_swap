/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 23:47:33 by rdutenke          #+#    #+#             */
/*   Updated: 2021/05/30 01:55:25 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_sawp.h"

t_stack	*ft_init_stack(int argc, char *argv[ ])
{
	t_stack *a;
	int i;

	a = ft_lst_new(ft_atoi(argv[1]));
	i = 2;
	while (i < argc)
	{
		ft_add_back(&a, ft_atoi(argv[i]));
		i++;
	}
	return (a);
}