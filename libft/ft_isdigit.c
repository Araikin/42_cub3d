/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asultanb <asultanb@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 15:52:26 by asultanb          #+#    #+#             */
/*   Updated: 2020/09/16 15:52:28 by asultanb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Function: ft_isdigit
**	--------------------
**	 tests for any character whether it's numeric (0-9)
**
**	 c:	character to test
**
**	 returns:	0 if false and non-zero if true
*/

#include "libft.h"

int		ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
