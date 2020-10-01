/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asultanb <asultanb@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 16:14:00 by asultanb          #+#    #+#             */
/*   Updated: 2020/09/16 16:43:18 by asultanb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Function:	ft_lstiter
**	----------------------
**	 iterates 'lst' and applies function 'f' to the content of each elem
**
**	 lst:	the adress of a pointer to an element
**	 f:		the adress of the function used to iterate on the list
**
**	 returns:	none
*/

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
