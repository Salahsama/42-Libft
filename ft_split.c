/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalah-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 10:56:51 by esalah-e          #+#    #+#             */
/*   Updated: 2026/10/21 09:18:29 by esalah-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static size_t	words_counter(char const *s, char c)
{
	size_t	counter;

	counter = 0;
	while (*s)
	{
		if (*s != c)
		{
			counter++;
			while (*s != c && *s)
				s++;
		}
		else
			s++;
	}
	return (counter);
}

static size_t	word_len(char const *s, size_t index, char c)
{
	size_t	counter;

	counter = 0;
	while (s[index + counter] && s[index + counter] != c)
		counter++;
	return (counter);
}

static char	*ft_malloc(char const *s, size_t index, char c)
{
	char	*p;
	size_t	len;
	size_t	i;

	i = 0;
	len = word_len(s, index, c);
	p = (char *)malloc(len + 1);
	if (p != NULL)
	{
		while (i < len)
		{
			p[i] = s[index + i];
			i++;
		}
		p[i] = '\0';
		return (p);
	}
	return (NULL);
}

static char	**ft_free(char **p, size_t nb)
{
	while (nb >= 0)
		free(p[--nb]);
	free(p);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**p;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	p = (char **)(malloc((words_counter(s, c) + 1) * sizeof(char *)));
	if (p == NULL)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c)
		{
			p[j] = ft_malloc(s, i, c);
			if (p[j] == NULL)
				return (ft_free(p, j));
			j++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	p[j] = NULL;
	return (p);
}
