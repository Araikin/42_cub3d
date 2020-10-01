/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asultanb <asultanb@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 15:52:53 by asultanb          #+#    #+#             */
/*   Updated: 2020/09/16 15:53:43 by asultanb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Function:	ft_lstnew
**	---------------------
**	 allocates and returns a new element.
**	 'content' initialized with the value of the parameter 'content'
**	 'next' is initialized to NULL.
**
**	 content:	the content to create the new element with.
**
**	 returns:	the new element
*/

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	if (!(node = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}
