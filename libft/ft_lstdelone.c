/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asultanb <asultanb@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 15:58:35 by asultanb          #+#    #+#             */
/*   Updated: 2020/09/16 15:58:37 by asultanb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Function:	ft_lstdelone
**	------------------------
**	 takes as a parameter an element and frees memory of the element’s content
**	 using the function 'del' given as a parameter and free the element.
**	 the memory of 'next' must not be freed.
**
**	 lst:	the element to free
**	 del:	the address of the function used to delete the content
**
**	 returns:	none
*/

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	del(lst->content);
	free(lst);
	lst = NULL;
}
