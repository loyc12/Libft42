/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llord <llord@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 13:34:38 by llord             #+#    #+#             */
/*   Updated: 2022/04/07 12:10:33 by llord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//duplicates a given string

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*s2;

	i = 0;
	while (s1[i] != '\0')
		++i;
	s2 = malloc(sizeof(char) * (i + 1));
	if (!s2)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		s2[i] = s1[i];
		++i;
	}
	s2[i] = '\0';
	return (s2);
}
