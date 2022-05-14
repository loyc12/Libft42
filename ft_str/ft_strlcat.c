/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llord <llord@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 13:35:19 by llord             #+#    #+#             */
/*   Updated: 2022/04/07 15:48:27 by llord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//adds a string to the end of another

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dstlen;
	size_t	srclen;

	i = 0;
	dstlen = 0;
	srclen = 0;
	while (dst[dstlen] && dstlen < dstsize)
		++dstlen;
	while (src[srclen])
		++srclen;
	while (src[i] && i + 1 < dstsize - dstlen)
	{
		dst[i + dstlen] = src[i];
		i++;
	}
	if (dstsize > i + dstlen)
		dst[i + dstlen] = '\0';
	return (dstlen + srclen);
}
