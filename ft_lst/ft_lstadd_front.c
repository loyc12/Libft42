/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llord <llord@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 13:07:47 by llord             #+#    #+#             */
/*   Updated: 2022/04/12 11:07:29 by llord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//defines a node as the new head of a given list

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (*lst)
		new->next = *lst;
	*lst = new;
}
