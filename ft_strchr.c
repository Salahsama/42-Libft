/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalah-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 12:21:29 by esalah-e          #+#    #+#             */
/*   Updated: 2026/10/15 14:26:04 by esalah-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	unsigned char	x;

	x = (unsigned char)c;
	while (*s)
	{
		if (x == (unsigned char)*s)
			return ((char *)s);
		s++;
	}
	if (x == '\0')
		return ((char *)s);
	return (NULL);
}
