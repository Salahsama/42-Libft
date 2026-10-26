/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalah-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 13:29:52 by esalah-e          #+#    #+#             */
/*   Updated: 2026/10/17 16:03:26 by esalah-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strdup(const char *s)
{
	size_t		i;
	size_t		len;
	char		*p;

	len = ft_strlen((char *)s);
	p = (char *)malloc(len + 1);
	i = 0;
	if (p != NULL)
	{
		while (i < len)
		{
			p[i] = s[i];
			i++;
		}
		p[i] = '\0';
	}
	return (p);
}
