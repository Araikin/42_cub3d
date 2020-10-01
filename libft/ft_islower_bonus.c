/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asultanb <asultanb@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 15:50:51 by asultanb          #+#    #+#             */
/*   Updated: 2020/09/16 15:50:52 by asultanb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Function:	ft_islower_bonus
**	----------------------------
**	 check if character is lowercase alphabet char a-z
**
**	 c:	character to check
**
**	 returns:	1 or 0 depending if character is a-z or not
*/

#include "libft.h"

int		ft_islower_bonus(char c)
{
	return (c >= 'A' && c <= 'Z');
}
