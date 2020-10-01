/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asultanb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 00:02:30 by asultanb          #+#    #+#             */
/*   Updated: 2020/09/21 12:45:51 by asultanb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Function:	ft_strsub
**	---------------------
**	 allocates substring from string 's'
**	 substring begins at 'start' and is of max size 'len'
**
**	 s:		string from which to create the substring
**	 start:	start index of the substring in the string 's'
**	 len:	max length of substring
**
**	 returns:	pointer to substring or NULL if allocation fails
*/

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	return (ft_substr(s, start, len));
}
