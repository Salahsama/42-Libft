/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalah-e <esalah-e@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 20:55:22 by esalah-e          #+#    #+#             */
/*   Updated: 2026/10/20 09:17:22 by esalah-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlen(long n)
{
	long	nb;
	int		counter;

	counter = 0;
	nb = n;
	if (n < 0)
	{
		nb = -nb;
		counter++;
	}
	while (nb >= 10)
	{
		nb = nb / 10;
		counter++;
	}
	return (++counter);
}

char	*ft_itoa(int n)
{
	char	*p;
	int		len;
	long	nb;

	nb = n;
	len = ft_numlen(nb);
	p = (char *)malloc(len + 1);
	if (!p)
		return (NULL);
	if (nb < 0)
	{
		nb = -nb;
		p[0] = '-';
	}
	p[len] = '\0';
	while ((n < 0) <= --len)
	{
		p[len] = (nb % 10) + '0';
		nb = nb / 10;
	}
	return (p);
}
