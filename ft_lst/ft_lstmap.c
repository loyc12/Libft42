/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llord <llord@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 13:07:47 by llord             #+#    #+#             */
/*   Updated: 2022/04/14 15:27:53 by llord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//creates a new list from applying f to another list

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*output;
	t_list	*new;

	new = NULL;
	output = NULL;
	while (lst)
	{
		new = ft_lstnew(f(lst->content));
		if (!new)
		{
			ft_lstclear(&output, del);
			return (NULL);
		}
		ft_lstadd_back(&output, ft_lstnew(new->content));
		lst = lst->next;
	}
	return (output);
}
