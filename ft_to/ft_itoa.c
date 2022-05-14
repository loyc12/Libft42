/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llord <llord@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 13:35:19 by llord             #+#    #+#             */
/*   Updated: 2022/04/07 12:17:06 by llord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//converts an interger into a string

static char	*fill_number(char *output, unsigned int number, long int len)
{
	while (number > 0)
	{
		output[len--] = '0' + (number % 10);
		number /= 10;
	}
	return (output);
}

static long int	lenght_finder(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char			*output;
	long int		len;
	unsigned int	number;
	int				sign;

	sign = 1;
	len = lenght_finder(n);
	output = malloc(sizeof(char) * (len + 1));
	if (!(output))
		return (NULL);
	output[len--] = '\0';
	if (n == 0)
		output[0] = '0';
	if (n < 0)
	{
		sign *= -1;
		output[0] = '-';
	}
	number = n * sign;
	output = fill_number(output, number, len);
	return (output);
}
