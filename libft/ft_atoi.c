/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asultanb <asultanb@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 15:58:53 by asultanb          #+#    #+#             */
/*   Updated: 2020/09/18 12:06:54 by asultanb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Function: ft_atoi
**	--------------------
**	 converts string 'str' to int representation
**
**	 str:	string to be converted to int
**
**	 returns:	converted integer
*/

#include "libft.h"

int		ft_atoi(const char *str)
{
	long	n;
	int		sign;
	int		i;

	sign = 1;
	n = 0;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
		n = 10 * n + str[i++] - '0';
	if (n < 0)
		n = (sign == -1) ? 0 : -1;
	return (sign * n);
}
