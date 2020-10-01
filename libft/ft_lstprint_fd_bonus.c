/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstprint_fd_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asultanb <asultanb@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 15:55:28 by asultanb          #+#    #+#             */
/*   Updated: 2020/09/16 16:27:30 by asultanb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Function:	ft_lstprint_fd_bonus
**	--------------------------------
**	 iterates and outputs content of each element of list 'lst'
**	 to the given file descriptor 'fd'
**
**	 lst:	pointer to the first element of list to be printed
**	 fd:	file descrtiptor on which to write
**
**	 returns:	none
*/

#include "libft.h"

void	ft_lstprint_fd_bonus(t_list *lst, int fd)
{
	while (lst)
	{
		ft_putstr_fd(lst->content, fd);
		ft_putstr_fd(" --> ", fd);
		lst = lst->next;
	}
	ft_putendl_fd("NULL", fd);
}
