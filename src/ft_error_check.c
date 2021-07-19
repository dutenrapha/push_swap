/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_check.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 15:06:45 by rdutenke          #+#    #+#             */
/*   Updated: 2021/07/19 21:59:29 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static bool	ft_not_num(char *value)
{
	bool	negative;

	negative = 0;
	while (*value != '\0')
	{
		if (*value == '-')
			negative = 1;
		else if (!ft_isdigit(*value))
		{
			return (1);
		}
		else
		{
			negative = 0;
		}
		value++;
	}
	if (negative == 0)
		return (0);
	else
		return (1);
}

static bool	ft_max_int(char *value)
{
	long int	num;
	int			len;

	len = ft_strlen(value);
	if (*value == '-')
		len--;
	num = ft_atoi(value);
	if (*value == '-' && num == 0)
		return (1);
	else if (len >= 10 && num == -1)
		return (1);
	else if (len == 10 && num == -2147483648 && *value != '-')
		return (1);
	else
		return (0);
}

bool	ft_error_check(char *value)
{
	if (ft_not_num(value))
		return (1);
	else if (ft_max_int(value))
		return (1);
	else
		return (0);
}
