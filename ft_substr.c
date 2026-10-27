/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalah-e <esalah-e@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 20:36:49 by esalah-e          #+#    #+#             */
/*   Updated: 2026/10/25 10:02:20 by esalah-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	slen;
	size_t	real_len;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (start >= slen)
		return (ft_strdup(""));
	real_len = slen - start;
	if (real_len > len)
		real_len = len;
	sub = (char *)malloc(real_len + 1);
	if (!sub)
		return (NULL);
	ft_memcpy(sub, s + start, real_len);
	sub[real_len] = '\0';
	return (sub);
}
