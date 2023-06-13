/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_math_exp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llord <llord@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 13:33:14 by llord             #+#    #+#             */
/*   Updated: 2023/06/13 14:06:28 by llord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//finds the eth exponent of a given number (below ^32)

int	*ft_math_exp(int n, int e)
{
	int	result;

	result = 1;
	if (e < 31)
	{
		while (e-- > 0 && n != 0)
			result *= n;
		return (result);
	}
	else
		return (0);
}
