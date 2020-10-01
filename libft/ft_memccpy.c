/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asultanb <asultanb@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 16:11:09 by asultanb          #+#    #+#             */
/*   Updated: 2020/09/16 16:44:22 by asultanb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Function: ft_memccpy
**	--------------------
**	 copies 'n' bytes from 'src' to 'dst' until 'c' is found.
**
**	 dst:	string to copy to
**	 src:	string to copy from
**	 c:		character to look for
**	 n:		number of bytes to copy from 'src'
**
**	 returns:	pointer to the byte after copying 'c' as unsigned char
**				to 'dst' or NULL and 'n' bytes are copied
*/

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		if (s[i] == (unsigned char)c)
			return (&d[i + 1]);
		i++;
	}
	return (NULL);
}
