/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llord <llord@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 13:07:47 by llord             #+#    #+#             */
/*   Updated: 2022/04/12 11:06:27 by llord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//creates the first node of a new list

t_list	*ft_lstnew(void *content)
{
	t_list	*tail;

	tail = malloc(sizeof(t_list));
	if (!tail)
		return (NULL);
	tail->content = content;
	tail->next = NULL;
	return (tail);
}
