/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llord <llord@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 13:07:47 by llord             #+#    #+#             */
/*   Updated: 2022/04/12 11:14:46 by llord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//finds the size of the given list

int	ft_lstsize(t_list *lst)
{
	t_list	*temp;
	int		i;

	i = 0;
	if (!lst)
		return (0);
	temp = lst;
	while (temp)
	{
		i++;
		temp = temp->next;
	}
	return (i);
}
