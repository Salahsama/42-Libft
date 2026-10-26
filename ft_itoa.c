/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalah-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 20:55:22 by esalah-e          #+#    #+#             */
/*   Updated: 2026/10/20 09:17:22 by esalah-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_numlen(long n)
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

char	*ft_fill(char *p, long nb, int len, int sign)
{
	int	i;

	i = sign;
	while (i < len)
	{
		p[len - i - !sign] = (nb % 10) + '0';
		nb = nb / 10;
		i++;
	}
	p[len] = '\0';
	return (p);
}

char	*ft_itoa(int n)
{
	char	*p;
	int		len;
	long	nb;

	nb = n;
	len = ft_numlen(nb);
	p = (char *)malloc(len + 1);
	if (p != NULL)
	{
		if (nb < 0)
		{
			nb = -nb;
			p[0] = '-';
		}
		return (ft_fill(p, nb, len, (p[0] == '-')));
	}
	return (NULL);
}
