/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asultanb <asultanb@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 15:53:01 by asultanb          #+#    #+#             */
/*   Updated: 2020/09/16 15:53:02 by asultanb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Function:	ft_putstr_fd
**	-------------------------
**	 outputs the string 's' to the given file descriptor 'fd'
**
**	 s:		string to output
**	 fd:	file descriptor on which to write
**
**	 returns:	none
*/

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (s)
	{
		while (*s)
		{
			write(fd, s, 1);
			s++;
		}
	}
}
