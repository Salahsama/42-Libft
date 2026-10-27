/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalah-e <esalah-e@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 10:39:35 by esalah-e          #+#    #+#             */
/*   Updated: 2026/10/16 11:38:20 by esalah-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	srclen;
	size_t	i;

	srclen = 0;
	i = 0;
	while (src[srclen])
	{
		if (i + 1 < size)
		{
			dest[i] = src[i];
			i++;
		}
		srclen++;
	}
	if (size == 0)
		return (srclen);
	dest[i] = '\0';
	return (srclen);
}
