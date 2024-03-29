/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llord <llord@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 10:23:25 by llord             #+#    #+#             */
/*   Updated: 2023/04/07 10:25:08 by llord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//checks is a char is a whitespace
int	ft_isspace(int c)
{
	if (c == 32)
		return (1);
	if (9 <= c && c <= 13)
		return (2);
	return (0);
}
