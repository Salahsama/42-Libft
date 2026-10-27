/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalah-e <esalah-e@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 11:04:15 by esalah-e          #+#    #+#             */
/*   Updated: 2026/10/17 12:46:45 by esalah-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char	*y;
	size_t				i;
	unsigned char		*p;

	if (!dest && !src)
		return (NULL);
	p = (unsigned char *)dest;
	y = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		p[i] = y[i];
		i++;
	}
	return (dest);
}
