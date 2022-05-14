/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llord <llord@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 15:09:51 by llord             #+#    #+#             */
/*   Updated: 2022/04/07 12:11:13 by llord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//copies a string onto another

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;

	i = 0;
	if (dstsize > 0)
	{
		while (src[i] && --dstsize)
		{
			dst[i] = src[i];
			i++;
		}
	dst[i] = '\0';
	}
	while (src[i])
		i++;
	return (i);
}
