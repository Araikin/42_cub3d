/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asultanb <asultanb@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 16:06:21 by asultanb          #+#    #+#             */
/*   Updated: 2020/09/16 16:45:44 by asultanb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Function:	ft_putchar_fd
**	-------------------------
**	 outputs the character 'c' to the given file descriptor 'fd'
**
**	 c:		character to output
**	 fd:	file descriptor on which to write
**
**	 returns:	none
*/

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
