/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asultanb <asultanb@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 16:08:27 by asultanb          #+#    #+#             */
/*   Updated: 2020/09/21 11:06:45 by asultanb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Function:	ft_itoa_base_bonus
**	------------------------------
**	 allocates and returns a 'fresh' string ending with '\0'
**	 representing the integer n given as argument in base
**	 negative numbers must be supported in base 10 only
**
**	 n:		the integer to be transformed into a string
**	 base:	base of the integer to which to transform
**
**	 returns:	string representing integer passed as argument or
**				NULL if the allocation fails
*/

#include "libft.h"

static int	ft_nbrlen(long long n, int base)
{
	int	i;

	i = 0;
	while (n)
	{
		n /= base;
		i++;
	}
	return (i);
}

char		*ft_itoa_base_bonus(int n, int base)
{
	char		*nbr_str;
	char		*base_arr;
	int			len;
	long long	n_ll;

	n_ll = (long long)n;
	if (base < 2 || base > 16)
		return (0);
	if (n == 0)
		return (ft_strdup("0"));
	if (n < 0)
		n_ll *= -1;
	base_arr = "0123456789ABCDEF";
	len = ft_nbrlen(n_ll, base) + (n < 0 && base == 10);
	if (!(nbr_str = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	if (n < 0)
		nbr_str[0] = '-';
	nbr_str[len] = '\0';
	while (n_ll != 0)
	{
		nbr_str[--len] = base_arr[n_ll % base];
		n_ll /= base;
	}
	return (nbr_str);
}
