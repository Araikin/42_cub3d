/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asultanb <asultanb@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 16:10:52 by asultanb          #+#    #+#             */
/*   Updated: 2020/09/16 16:45:04 by asultanb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Function: ft_memcpy
**	--------------------
**	 copies 'n' bytes from 'src' to 'dst'.
**
**	 dst:	string to copy to
**	 src:	string to copy from
**	 n:		number of bytes to copy from 'src'
**
**	 returns:	the original value of 'dst'
*/

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*d;
	const char	*s;

	i = 0;
	d = (char *)dst;
	s = (const char *)src;
	if (!dst && !src)
		return (NULL);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
