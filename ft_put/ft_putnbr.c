/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llord <llord@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 15:05:48 by llord             #+#    #+#             */
/*   Updated: 2022/04/23 11:21:37 by llord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//writes a number onto the terminal

static	char	digitfinder(int number, int position)
{
	int		digit;

	while (position > 1)
	{
		number = number / 10;
		--position;
	}
	digit = number % 10;
	return ('0' + digit);
}

static	int	lenghtfinder(int number)
{
	int	lenght;

	lenght = 0;
	while (number > 0)
	{
		number = number / 10;
		++lenght;
	}
	return (lenght);
}

void	ft_putnbr(int n)
{
	int		lenght;
	char	digit;

	if (n == 0)
		write (1, "0", 1);
	if (n < 0 && n != -2147483648)
	{
		n = 0 - n;
		write (1, "-", 1);
	}
	if (n == -2147483648)
	{
		n += 2000000000;
		n = 0 - n;
		write (1, "-", 1);
		write(1, "9", 1);
	}
	lenght = lenghtfinder(n);
	while (lenght > 0)
	{
		digit = digitfinder(n, lenght);
		--lenght;
		write(1, &digit, 1);
	}
}
