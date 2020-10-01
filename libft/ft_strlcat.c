/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asultanb <asultanb@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 16:00:05 by asultanb          #+#    #+#             */
/*   Updated: 2020/09/16 16:48:05 by asultanb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Function: ft_strlcat
**	--------------------
**	 appends at most dstsize - strlen(dst) - 1 chars of 'src' to end of 'dst'
**	 it will NUL-terminate if 'dstsize' is not 0 or 'dst' longer than 'dstsize'
**
**	 dst:		string to copy to
**	 src:		string to copy from
**	 dstsize:	number of bytes to copy from 'src'
**
**	 returns:	total length of the string it tried to create, which is
**				initial length of 'dst' + length of 'src')
*/

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dlen;
	size_t	slen;

	slen = ft_strlen(src);
	dlen = ft_strlen(dst);
	slen = slen + (dstsize < dlen ? dstsize : dlen);
	while (*src && dstsize > dlen + 1)
	{
		*(dst + dlen) = *src;
		dlen++;
		src++;
	}
	*(dst + dlen) = '\0';
	return (slen);
}
