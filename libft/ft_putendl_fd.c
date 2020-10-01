/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asultanb <asultanb@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 16:09:01 by asultanb          #+#    #+#             */
/*   Updated: 2020/09/16 16:45:55 by asultanb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Function:	ft_putendl_fd
**	-------------------------
**	 outputs the string 's' to the given file descriptor 'fd' followed by '\n'
**
**	 s:		string to output
**	 fd:	file descriptor on which to write
**
**	 returns:	none
*/

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (s)
	{
		while (*s)
		{
			write(fd, s, 1);
			s++;
		}
		write(fd, "\n", 1);
	}
}
