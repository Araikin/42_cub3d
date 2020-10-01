/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asultanb <asultanb@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 16:09:59 by asultanb          #+#    #+#             */
/*   Updated: 2020/09/16 16:10:01 by asultanb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Function: ft_isprint
**	--------------------
**	 tests for any printing character, including space
**
**	 c:	character to test
**
**	 returns:	0 if false and non-zero if true
*/

#include "libft.h"

int		ft_isprint(int c)
{
	return (c >= 32 && c < 127);
}
