/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asultanb <asultanb@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 16:13:08 by asultanb          #+#    #+#             */
/*   Updated: 2020/09/16 16:13:09 by asultanb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Function: ft_isascii
**	--------------------
**	 tests for an ASCII character, which is any between
**	 0 and octal 0177 inclusive
**
**	 c:	character to test
**
**	 returns:	0 if false and non-zero if true
*/

#include "libft.h"

int		ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
