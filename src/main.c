/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 21:50:19 by rdutenke          #+#    #+#             */
/*   Updated: 2021/06/01 03:09:18 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_sawp.h"

int main(int argc, char *argv[ ])
{
	t_solution	*s;
	t_stack	*a;

	a = NULL;
	a = ft_init_stack(argc, argv);
	ft_insertion_sort(&s, a, argc - 1);
	ft_print_sol(s);
}
