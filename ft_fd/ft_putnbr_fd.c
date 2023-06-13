/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llord <llord@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 15:05:48 by llord             #+#    #+#             */
/*   Updated: 2023/06/13 14:05:36 by llord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//writes a number onto a file

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

//writes a number onto a file
void	ft_putnbr_fd(int n, int fd)
{
	int		lenght;
	char	digit;

	if (n == 0)
		write (fd, "0", 1);
	if (n < 0 && n != -2147483648)
	{
		n = 0 - n;
		write (fd, "-", 1);
	}
	if (n == -2147483648)
	{
		n += 2000000000;
		n = 0 - n;
		write (fd, "-", 1);
		write(fd, "2", 1);
	}
	lenght = lenghtfinder(n);
	while (lenght > 0)
	{
		digit = digitfinder(n, lenght);
		--lenght;
		write(fd, &digit, 1);
	}
}
