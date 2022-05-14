/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llord <llord@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 17:07:51 by llord             #+#    #+#             */
/*   Updated: 2022/04/07 12:19:33 by llord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//converts a string into an interger

int	ft_atoi(const char *str)
{
	int		i;
	int		sign;
	long	number;

	i = 0;
	sign = 1;
	number = 0;
	while (str[i] == ' ' || (9 <= str[i] && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while ('0' <= str[i] && str[i] <= '9')
	{
		number *= 10;
		number += (str[i] - '0');
		i++;
	}
	return ((sign * number));
}
