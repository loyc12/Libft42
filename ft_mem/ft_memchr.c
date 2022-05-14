/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llord <llord@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 13:34:38 by llord             #+#    #+#             */
/*   Updated: 2022/04/07 12:16:24 by llord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//locates the first instance of a value in a given memory location

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;

	str = (char *)s;
	while (n--)
	{
		if (*str++ == (char)c)
			return ((char *)str - 1);
	}
	return (NULL);
}
