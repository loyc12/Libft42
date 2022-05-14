/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llord <llord@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 13:34:38 by llord             #+#    #+#             */
/*   Updated: 2022/04/07 15:51:52 by llord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//copies only part of a string into a new string

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*substr;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
	{
		substr = malloc(sizeof(char));
		substr[0] = '\0';
		return (substr);
	}
	i = 0;
	while (s[i])
		i++;
	if (i < len)
		len = i;
	substr = malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	i = -1;
	while (++i < len)
		substr[i] = s[i + start];
	substr[i] = '\0';
	return (substr);
}
