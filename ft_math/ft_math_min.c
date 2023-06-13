/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_math_min.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llord <llord@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 13:33:14 by llord             #+#    #+#             */
/*   Updated: 2023/06/13 14:06:58 by llord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//finds the lesser number of a given list

int	*ft_math_min(int *lst)
{
	int	result;

	if (lst)
	{
		result = *lst;
		while (lst++)
		{
			if (*lst < result)
				result = *lst;
		}
		return (result);
	}
	else
		return (0);
}
