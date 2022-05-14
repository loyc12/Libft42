/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llord <llord@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 11:44:13 by llord             #+#    #+#             */
/*   Updated: 2022/04/07 12:19:09 by llord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//fills a memory location with zeros

void	*ft_bzero(void *s, size_t n)
{
	char	*ptr;

	ptr = (char *)s;
	while (n--)
		*ptr++ = 0;
	return (s);
}
