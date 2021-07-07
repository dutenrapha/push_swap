/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 21:50:19 by rdutenke          #+#    #+#             */
/*   Updated: 2021/07/07 21:39:10 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_sawp.h"

int	main(int argc, char *argv[ ])
{
	t_solution	*s;
	t_stack		*a;
	t_stack		*b;

	a = NULL;
	s = NULL;
	a = ft_init_stack(argc, argv);
	b = ft_init_stack(argc, argv);
	ft_relabel(&a, b);
	ft_radix_sort(&s, &a);
	ft_print_sol(s);
	ft_free_stack(&a);
	ft_free_stack(&b);
	ft_free_solution(&s);
}
