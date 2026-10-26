/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalah-e <esalah-e@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 11:39:58 by esalah-e          #+#    #+#             */
/*   Updated: 2026/10/16 14:47:00 by esalah-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dlen;
	size_t	slen;
	size_t	i;

	dlen = 0;
	slen = ft_strlen(src);
	if (size == 0)
		return (slen);
	while (dlen < size && dest[dlen])
		dlen++;
	if (size == dlen)
		return (slen + size);
	i = dlen;
	while (src[i - dlen] && i + 1 < size)
	{
		dest[i] = src[i - dlen];
		i++;
	}
	dest[i] = '\0';
	return (dlen + slen);
}
