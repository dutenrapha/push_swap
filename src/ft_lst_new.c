/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_new.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 23:28:35 by rdutenke          #+#    #+#             */
/*   Updated: 2021/05/29 23:45:52 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_sawp.h"

t_stack	*ft_lst_new(int data)
{
	t_stack *head;

	head = (t_stack *)malloc(sizeof(t_stack));
	head->data = data;
	head->next = NULL;
	return (head);
}