/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 21:50:19 by rdutenke          #+#    #+#             */
/*   Updated: 2021/07/09 01:57:07 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int argc, char *argv[ ])
{
	t_solution	*s;
	t_stack		*a;
	t_stack		*b;
	int			size;

	a = NULL;
	s = NULL;
	a = ft_init_stack(argc, argv);
	if (!ft_is_sorted(&a))
	{
		b = ft_init_stack(argc, argv);
		size = ft_lstlen(a);
		ft_relabel(&a, b);
		if (size == 3)
			ft_sort_3(&s, &a);
		else if (size == 5)
			ft_sort_5(&s, &a);
		else
			ft_radix_sort(&s, &a);
		ft_print_sol(s);
		ft_free_stack(&a);
		ft_free_stack(&b);
		ft_free_solution(&s);
	}
}
