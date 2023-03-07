/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_array.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llord <llord@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 15:31:17 by llord             #+#    #+#             */
/*   Updated: 2023/03/07 15:39:09 by llord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//takes a pointer's adress and frees whatever is there, setting it to NULL after
void	ft_free_null(void **ptr)
{
	free(*ptr);
	*ptr = NULL;
}

//takes a array's adress and frees whatever is there, setting it all to NULL after
void	ft_free_array(void ***ptr)
{
	int	i;

	if (*ptr)
	{
		i = -1;
		while (*ptr[++i])
			ft_free_null(&((*ptr)[i]));
		ft_free_null(ptr);
	}
}
