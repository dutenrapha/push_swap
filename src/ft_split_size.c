/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_size.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 16:44:48 by rdutenke          #+#    #+#             */
/*   Updated: 2021/07/07 21:38:42 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_sawp.h"

int	ft_split_size(char **split)
{
	int		i;

	i = 0;
	while (split[i] != NULL)
	{
		i++;
	}
	return (i);
}
