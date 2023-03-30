/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llord <llord@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 13:37:19 by llord             #+#    #+#             */
/*   Updated: 2023/03/30 11:46:41 by llord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	isnotmatch(char *hay, char *nee, unsigned int position, size_t len);

//finds the first occurence of a string in another string
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	i;
	char			*hay;

	i = 0;
	hay = (char *)haystack;
	if (needle[0] == '\0')
		return (hay);
	while (hay[i] != '\0' && i < len)
	{
		if (hay[i] == needle[0])
		{
			if (!isnotmatch(hay, (char *)needle, i, len))
				return (&hay[i]);
		}
		++i;
	}
	return (NULL);
}

static	int	isnotmatch(char *hay, char *nee, unsigned int position, size_t len)
{
	unsigned int	i;

	i = 0;
	while (nee[i] != '\0')
	{
		if (hay[i + position] != nee[i])
			return (1);
		++i;
	}
	if (position + i > len)
		return (1);
	return (0);
}
