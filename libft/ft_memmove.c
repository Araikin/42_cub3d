/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asultanb <asultanb@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 16:00:33 by asultanb          #+#    #+#             */
/*   Updated: 2020/09/17 15:22:41 by asultanb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Function: ft_memmove
**	--------------------
**	 copies 'len' bytes from 'src' to 'dst'. Strings may overlap
**
**	 dst:	string to copy to
**	 src:	string to copy from
**	 len:	number of bytes to copy from 'src'
**
**	 returns:	the original value of 'dst'
*/

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*s;
	char	*d;

	if (!dst && !src)
		return (NULL);
	i = -1;
	d = (char *)dst;
	s = (char *)src;
	if (s < d && d < s + len)
	{
		while (len)
		{
			len--;
			d[len] = s[len];
		}
	}
	else
		while (++i < len)
			d[i] = s[i];
	return (d);
}
