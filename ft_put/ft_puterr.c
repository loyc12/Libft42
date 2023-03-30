/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puterr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llord <llord@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 21:28:54 by llord             #+#    #+#             */
/*   Updated: 2023/03/30 10:53:24 by llord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//writes an error message followed by \n
//returns 1 if the message is non empty
int	ft_puterr(char *err)
{
	int	i;

	i = -1;
	while (err[++i] != '\0')
		write (2, &err[i], 1);
	write (2, "\n", 1);
	if (err[0])
		return (EXIT_FAILURE);
	return (EXIT_SUCCESS);
}
