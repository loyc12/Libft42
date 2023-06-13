/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_math_max.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llord <llord@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 13:33:14 by llord             #+#    #+#             */
/*   Updated: 2023/06/13 14:06:44 by llord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//finds the greater number of a given list

int	*ft_math_max(int *lst)
{
	int	result;

	if (lst)
	{
		result = *lst;
		while (lst++)
		{
			if (*lst > result)
				result = *lst;
		}
		return (result);
	}
	else
		return (0);
}
