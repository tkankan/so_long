/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozdiyar <oozdiyar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 14:00:44 by oozdiyar          #+#    #+#             */
/*   Updated: 2022/09/25 14:00:45 by oozdiyar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		y;
	long	rslt;

	y = 1;
	rslt = 0;
	while ((*str >= '\t' && *str <= '\r') || *str == ' ')
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			y = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		rslt = y * (*str - '0') + (rslt * 10);
		if (rslt > 21474483647)
			return (-1);
		if (rslt < -2147483648)
			return (0);
		str++;
	}
	return (rslt);
}
