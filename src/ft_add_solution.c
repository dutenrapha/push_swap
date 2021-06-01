/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_solution.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 02:42:03 by rdutenke          #+#    #+#             */
/*   Updated: 2021/06/01 02:54:03 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_sawp.h"

// static void	ft_aux(t_solution **head, char *step)
// {
// 	t_solution	*n;
// 	char	*temp;

// 	n = *head;
// 	while (n != NULL)
// 	{
// 		temp = n->step;
// 		n->step = step;
// 		step = temp;
// 		n = n->next;
// 	}
// }

void	ft_add_solution(t_solution **head, char *step)
{
	t_solution	*n;
	t_solution	*add;

	if (*head == NULL)
	{
		*head = (t_solution *)malloc(sizeof(t_solution));
		(*head)->step = step;
		(*head)->next = NULL;
	}
	else
	{
		add = (t_solution *)malloc(sizeof(t_solution));
		add->step = step;
		add->next = NULL;
		n = *head;
		while (n->next != NULL)
			n = n->next;
		n->next = add;
		// ft_aux(head, step);
	}
}