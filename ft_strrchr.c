/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalah-e <esalah-e@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 09:06:09 by esalah-e          #+#    #+#             */
/*   Updated: 2026/10/15 10:50:15 by esalah-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	x;
	char			*pnt;
	int				found;

	x = (unsigned char)c;
	pnt = (char *)s;
	found = 0;
	while (*s)
	{
		if (x == (unsigned char)*s)
		{
			pnt = (char *)s;
			found = 1;
		}
		s++;
	}
	if (x == '\0')
	{
		found = 1;
		pnt = (char *)s;
	}
	if (found == 0)
		return (NULL);
	else
		return (pnt);
}
