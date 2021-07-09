/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 20:14:50 by rdutenke          #+#    #+#             */
/*   Updated: 2021/07/08 20:24:28 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	case1(t_solution **s, t_stack **a)
{
	ft_swap(a);
	ft_add_solution(s, "sa");
}

void	case2(t_solution **s, t_stack **a)
{
	ft_swap(a);
	ft_add_solution(s, "sa");
	ft_rr(a);
	ft_add_solution(s, "rra");
}

void	case3(t_solution **s, t_stack **a)
{
	ft_r(a);
	ft_add_solution(s, "ra");
}

void	case4(t_solution **s, t_stack **a)
{
	ft_swap(a);
	ft_add_solution(s, "sa");
	ft_r(a);
	ft_add_solution(s, "ra");
}

void	case5(t_solution **s, t_stack **a)
{
	ft_rr(a);
	ft_add_solution(s, "rra");
}
