/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asultanb <asultanb@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 15:53:18 by asultanb          #+#    #+#             */
/*   Updated: 2020/09/16 15:53:19 by asultanb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Function: ft_strlcpy
**	--------------------
**	 copies up to 'dstsize' - 1 chars from 'src' to 'dst',
**	 NUL-terminating the result if 'dstsize' is not 0
**
**	 dst:		string to copy to
**	 src:		string to copy from
**	 dstsize:	number of bytes to copy from 'src'
**
**	 returns:	length of string it tried to create, e.g. length of 'src'
*/

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	i;

	if (!src || !dst)
		return (0);
	src_len = ft_strlen(src);
	i = 0;
	if (dstsize > 0)
	{
		while (src[i] && i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (src_len);
}
