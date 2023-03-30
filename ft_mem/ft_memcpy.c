/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llord <llord@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 11:44:13 by llord             #+#    #+#             */
/*   Updated: 2023/03/30 11:45:05 by llord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//copies a given memory location onto another (unsafe)
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	if (!src && !dst)
		return (NULL);
	d = (char *)dst;
	s = (const char *)src;
	while (n--)
		*d++ = *s++;
	return (dst);
}
