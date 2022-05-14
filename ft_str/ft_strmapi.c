/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llord <llord@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 13:07:56 by llord             #+#    #+#             */
/*   Updated: 2022/04/12 12:04:18 by llord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//creates a new string from applying f to another string

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*output;
	int		i;

	i = 0;
	while (s[i])
		i++;
	output = malloc((i + 1) * sizeof(char));
	if (!output)
		return (NULL);
	i = 0;
	while (s[i])
	{
		output[i] = f(i, s[i]);
		i++;
	}
	output[i] = '\0';
	return (output);
}
