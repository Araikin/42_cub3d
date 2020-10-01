/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asultanb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 20:29:10 by asultanb          #+#    #+#             */
/*   Updated: 2020/09/21 12:46:54 by asultanb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Function: ft_strnew
**	--------------------
**	 allocates and returns a “fresh” string ending with ’\0’.
**	 each character of the string is initialized at ’\0’
**	 if the allocation fails the function returns NULL.
**
**	 size:	the size of the string to be allocated.
**
**	 returns:	the string allocated and initialized to 0.
*/

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;
	size_t	n;

	n = size + 1;
	if (!(str = (char *)malloc(sizeof(char) * n)))
		return (NULL);
	return (ft_memset(str, '\0', n));
}
