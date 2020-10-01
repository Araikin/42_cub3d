/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asultanb <asultanb@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 16:14:43 by asultanb          #+#    #+#             */
/*   Updated: 2020/09/16 16:14:44 by asultanb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Function:	ft_lstclear
**	-----------------------
**	 deletes and frees the given element and every successor of that element
**	 using the function 'del' and free(3)
**	 finally, the pointer to the list must be set to NULL
**
**	 lst: 	adress of a pointer to an element
**	 del:	adress of the function used to delete the content of the element
**
**	 returns:	none
*/

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	if ((*lst)->next)
		ft_lstclear(&(*lst)->next, del);
	del((*lst)->content);
	free(*lst);
	*lst = NULL;
	lst = NULL;
}
