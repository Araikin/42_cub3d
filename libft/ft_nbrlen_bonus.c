/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asultanb <asultanb@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 15:51:06 by asultanb          #+#    #+#             */
/*   Updated: 2020/09/16 15:51:08 by asultanb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Function:	ft_nbrlen_bonus
**	---------------------------
**	 counts number of digits in given integer 'n' including sign
**
**	 n:	integer to count digits of
**
**	 returns:	int number of digits in integer 'n'
*/

#include "libft.h"

int		ft_nbrlen_bonus(int n)
{
	int	res;

	res = 0;
	if (n < 0)
		res += 1;
	while (n != 0)
	{
		res++;
		n /= 10;
	}
	return (res);
}
