/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_cpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llord <llord@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 13:33:14 by llord             #+#    #+#             */
/*   Updated: 2023/06/13 14:05:56 by llord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//copies a list of ints

int	*array_cpy(int *srclst, int n)
{
	int	*dstlst;

	dstlst = ft_calloc(n++, sizeof(int));
	if (!srclst && !dstlst && !(0 < n))
		return (NULL);
	while (n--)
		dstlst[n] = srclst[n];
	return (dstlst);
}
