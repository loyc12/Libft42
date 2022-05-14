/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llord <llord@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 13:35:04 by llord             #+#    #+#             */
/*   Updated: 2022/04/07 12:14:33 by llord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//compares the first diverging value from two different memory locations

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	i;
	unsigned char	*s3;
	unsigned char	*s4;

	i = 0;
	s3 = (unsigned char *)s1;
	s4 = (unsigned char *)s2;
	while (i < n)
	{
		if (s3[i] != s4[i])
			return (s3[i] - s4[i]);
		++i;
	}
	return (0);
}
