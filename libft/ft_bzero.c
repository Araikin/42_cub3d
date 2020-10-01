/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asultanb <asultanb@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 16:13:28 by asultanb          #+#    #+#             */
/*   Updated: 2020/09/16 16:13:29 by asultanb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Function: ft_bzero
**	--------------------
**	 copies 'n' zeroed bytes to 's' or does nothing if n = 0
**
**	 s:	string to write to
**	 n:	number of bytes to copy from 's'
**
**	 returns:	void
*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
