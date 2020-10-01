/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfind_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asultanb <asultanb@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 16:10:16 by asultanb          #+#    #+#             */
/*   Updated: 2020/09/16 16:42:59 by asultanb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Function:	ft_lstfind_bonus
**	----------------------------
**	 iterates and finds 'lst' element with matching 'data' as content
**
**	 lst:	pointer to the first node of the list
**	 data:	data to find in list
**	 cmp:	function to compare data to content
**
**	 returns:	pointer to the node with matching 'data' or
**				NULL if there is no such node
*/

#include "libft.h"

t_list	*ft_lstfind_bonus(t_list *lst, void *data, int (*cmp)())
{
	t_list	*to_find;

	to_find = lst;
	while (to_find != NULL)
	{
		if ((*cmp)(to_find->content, data) == 0)
			return (to_find);
		to_find = to_find->next;
	}
	return (NULL);
}
