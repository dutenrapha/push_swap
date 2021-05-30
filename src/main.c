/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 21:50:19 by rdutenke          #+#    #+#             */
/*   Updated: 2021/05/30 03:05:35 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_sawp.h"

// int main(void)
int main(int argc, char *argv[ ])
{
	t_solution	*s;
	t_stack	*a;

	a = NULL;
	a = ft_init_stack(argc, argv);
	s = ft_insertion_sort(a, argc - 1);
	while (s != NULL)
	{
		printf("%s\n",s->step);
		s = s->next;
	}
}
