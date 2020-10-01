/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asultanb <asultanb@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 16:08:40 by asultanb          #+#    #+#             */
/*   Updated: 2020/09/16 16:43:41 by asultanb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Function:	ft_lstmap
**	---------------------
**	 creates a new list after successful application of function 'f'
**	 to the content of each element of list 'lst'
**	 'del' function is used to delete the content of an element if needed.
**
**	 lst:	the adress of a pointer to an element
**	 f:		the adress of the function used to iterate on the list
**	 del:	the adress of the function used to delete the content of
**			an element if needed
**
**	 returns:	the new list or NULL if the allocation fails.
*/

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*node;

	new_list = NULL;
	while (lst)
	{
		if (!(node = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, node);
		lst = lst->next;
	}
	return (new_list);
}
