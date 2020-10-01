/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asultanb <asultanb@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 15:59:54 by asultanb          #+#    #+#             */
/*   Updated: 2020/09/16 15:59:56 by asultanb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Function:	ft_calloc
**	---------------------
**	 contigiously allocates enough space for 'count' objects,
**	 that are 'size' bytes of memory each
**
**	 count:	number of objects to allocate memory for
**	 size:	number of bytes of memory of each object
**
**	 returns:	pointer to allocated memory filled with bytes of value 0
**				NULL pointer in case of an error
*/

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;
	size_t	total_size;

	ptr = NULL;
	total_size = count * size;
	if (!(ptr = malloc(total_size)))
		return (NULL);
	ft_memset(ptr, 0, total_size);
	return (ptr);
}
