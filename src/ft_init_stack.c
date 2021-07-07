/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 23:47:33 by rdutenke          #+#    #+#             */
/*   Updated: 2021/07/07 22:17:45 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static void	ft_aux(t_stack	**s, char *str)
{
	char	**list;
	int		size;
	int		i;

	i = 0;
	list = ft_split(str, ' ');
	size = ft_split_size(list);
	while (i < size)
	{
		ft_add_back(s, ft_atoi(list[i]));
		i++;
	}
}

t_stack	*ft_init_stack(int argc, char *argv[ ])
{
	t_stack	*a;
	int		i;

	a = NULL;
	if (argc == 2)
		ft_aux(&a, argv[1]);
	else
	{
		i = 1;
		while (i < argc)
		{
			ft_add_back(&a, ft_atoi(argv[i]));
			i++;
		}
	}
	return (a);
}
