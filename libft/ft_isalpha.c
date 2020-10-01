/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asultanb <asultanb@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 16:04:58 by asultanb          #+#    #+#             */
/*   Updated: 2020/09/16 16:05:01 by asultanb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Function: ft_isalpha
**	--------------------
**	 tests for any character whether it's alphabetic A-Z, a-z
**
**	 c:	character to test
**
**	 returns:	0 if false and non-zero if true
*/

#include "libft.h"

int		ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
