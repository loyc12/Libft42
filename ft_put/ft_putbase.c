/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbase.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llord <llord@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 15:05:48 by llord             #+#    #+#             */
/*   Updated: 2022/04/19 14:17:38 by llord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//writes a number in a given base

void	ft_putbase(unsigned long n, unsigned long base, char *baselist)
{
	char	digit;

	if (base > ft_strlen(baselist))
		write(1, "Unsuitable baselist", 19);
	else
	{
		if (n > base)
			ft_putbase((n / base), base, baselist);
		digit = baselist[(n % base)];
		write(1, &digit, 1);
	}
}
