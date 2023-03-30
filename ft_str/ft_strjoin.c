/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llord <llord@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 13:35:19 by llord             #+#    #+#             */
/*   Updated: 2023/03/30 11:46:49 by llord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//creates a new string that is the sum of two other strings
char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		offset;
	char	*str;

	i = 0;
	str = malloc((ft_strlen(s1) + ft_strlen(s2)) * sizeof(char *));
	if (!str)
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	offset = i;
	i = 0;
	while (s2[i])
	{
		str[i + offset] = s2[i];
		i++;
	}
	str[i + offset] = '\0';
	return (str);
}
