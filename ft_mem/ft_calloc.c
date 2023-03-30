/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llord <llord@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 13:07:47 by llord             #+#    #+#             */
/*   Updated: 2023/03/30 11:45:05 by llord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//mallocs a memory location and fills it with zeros
void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	i;

	i = count * size;
	if (i == 0)
		i++;
	ptr = (void *)malloc(i);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, i);
	return (ptr);
}
