/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asultanb <asultanb@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 15:59:06 by asultanb          #+#    #+#             */
/*   Updated: 2020/09/16 15:59:09 by asultanb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Function: ft_isalnum
**	--------------------
**	 tests for any character whether it's alphabetic or digit
**	 A-Z, a-z, 0-9, 0-9, 0-9, 0-9
**
**	 c:	character to test
**
**	 returns:	0 if false and non-zero if true
*/

#include "libft.h"

int		ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
