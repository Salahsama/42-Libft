/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalah-e <esalah-e@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 16:06:28 by esalah-e          #+#    #+#             */
/*   Updated: 2026/10/17 16:02:00 by esalah-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char		*ds;
	const unsigned char	*sr;
	size_t				i;

	if (!dst && !src)
		return (NULL);
	ds = (unsigned char *)dst;
	sr = (const unsigned char *)src;
	if (src < dst)
	{
		i = n;
		while (i-- > 0)
			ds[i] = sr[i];
	}
	else
	{
		i = 0;
		while (i < n)
		{
			ds[i] = sr[i];
			i++;
		}
	}
	return (dst);
}
