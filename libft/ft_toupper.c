/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asultanb <asultanb@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 16:08:01 by asultanb          #+#    #+#             */
/*   Updated: 2020/09/16 16:08:03 by asultanb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Function: ft_toupper
**	--------------------
**	 converts a lower-case letter to corresponding upper-case
**
**	 c:	character to test
**
**	 returns:	corresponding upper-case character
*/

#include "libft.h"

int		ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}
