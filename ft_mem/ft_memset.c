/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llord <llord@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 11:44:13 by llord             #+#    #+#             */
/*   Updated: 2023/03/30 11:45:05 by llord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//fills a memory adress with a given char
void	*ft_memset(void *b, int c, size_t len)
{
	char	*ptr;

	ptr = (char *)b;
	while (len--)
		*ptr++ = c;
	return (b);
}
