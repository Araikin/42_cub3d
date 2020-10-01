/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asultanb <asultanb@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 16:06:36 by asultanb          #+#    #+#             */
/*   Updated: 2020/09/16 16:06:38 by asultanb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Function:	ft_strnew_bonus
**	----------------------
**	 Allocates and returns a “fresh” string ending with ’\0’.
**	 Each character of the string is initialized at ’\0’.
**	 If the allocation fails the function returns NULL.
**
**	 size:	the size of the string to be allocated
**
**	 returns:	the string allocated and initialized to 0
*/

#include "libft.h"

char	*ft_strnew_bonus(size_t size)
{
	char	*str;
	size_t	n;

	n = size + 1;
	if (!(str = (char *)malloc(sizeof(char) * n)))
		return (NULL);
	return (ft_memset(str, '\0', n));
}
