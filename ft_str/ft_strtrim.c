/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llord <llord@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 13:35:19 by llord             #+#    #+#             */
/*   Updated: 2022/10/21 12:45:00 by llord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//creates a new string without the specified characters
//at the begining/end of the original string

static	int	not_in_set(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (0);
		i++;
	}
	return (1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s2;
	int		start;
	int		end;

	if (!s1 || !set)
		return (0);
	start = 0;
	while (!not_in_set(s1[start], set) && s1[start])
		start++;
	end = ft_strlen(s1);
	while (!not_in_set(s1[end - 1], set) && start < end)
		end--;
	s2 = (ft_substr(s1, start, (size_t)(end - start)));
	return (s2);
}
