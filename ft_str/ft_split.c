/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llord <llord@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 13:35:19 by llord             #+#    #+#             */
/*   Updated: 2023/03/30 11:46:47 by llord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		word_count(char const *s, char c);
static int		word_lenght(char const *s, char c, int start);
static int		next_word(char const *s, char c, int start);
static char		*fill_word(char const *s, char c, int start);

//does black magic to split a string into an array of substrings
char	**ft_split(char const *s, char c)
{
	char	**output;
	int		wcount;
	int		i;
	int		start;

	i = 0;
	start = 0;
	wcount = word_count(s, c);
	output = malloc((wcount + 1) * sizeof(char *));
	if (!output || !s)
		return (NULL);
	while (s[start] == c)
		start++;
	while (i < wcount)
	{
		output[i++] = fill_word(s, c, start);
		start = next_word(s, c, start);
	}
	output[i] = NULL;
	return (output);
}

static	int	word_count(char const *s, char c)
{
	int	i;
	int	count;

	if (!s[0])
		return (0);
	i = 1;
	count = 0;
	while (s[i])
	{
		if (s[i] == c && s[i - 1] != c)
			count++;
		i++;
	}
	if (s[i - 1] != c)
		count++;
	return (count);
}

static	int	word_lenght(char const *s, char c, int start)
{
	int	i;

	i = 0;
	while (s[i + start])
	{
		if (s[i + start] == c)
			break ;
		i++;
	}
	return (i);
}

static	int	next_word(char const *s, char c, int start)
{
	while (s[start])
	{
		if (s[start] == c)
			break ;
		start++;
	}
	while (s[start])
	{
		if (s[start] != c)
			break ;
		start++;
	}
	return (start);
}

static	char	*fill_word(char const *s, char c, int start)
{
	char	*str;
	int		i;

	i = 0;
	if (!s[0])
		return (NULL);
	str = ft_calloc(word_lenght(s, c, start) + 1, sizeof(char));
	if (!str)
		return (NULL);
	while (s[i + start])
	{
		if (s[i + start] == c)
			break ;
		str[i] = s[i + start];
		i++;
	}
	return (str);
}
