/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llord <llord@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 11:44:13 by llord             #+#    #+#             */
/*   Updated: 2023/06/13 12:47:41 by llord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//fills a memory range with a given char
void	*ft_memset(void *dst, int c, size_t len)
{
	char	*ptr;

	ptr = (char *)dst;
	while (len--)
		*ptr++ = c;
	return (dst);
}

//fills a memory range with values from a given array (alternates between them)
void	*ft_memfset(void *dst, int *a, size_t dst_len, int a_len)
{
	char	*ptr;
	int		i;

	i = 0;
	ptr = (char *)dst;
	while (dst_len--)
	{
		if (i >= a_len)
			i = 0;
		*ptr++ = a[i++];
	}
	return (dst);
}
