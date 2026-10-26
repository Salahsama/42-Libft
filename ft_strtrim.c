/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalah-e <esalah-e@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 14:32:25 by esalah-e          #+#    #+#             */
/*   Updated: 2026/10/26 09:35:26 by esalah-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static size_t	ft_check(char const *s1, char const *set, size_t indx, int fl)
{
	int	len;
	int	i;

	len = (int)ft_strlen(set);
	i = 0;
	while (i < len)
	{
		if (s1[indx] == set[i])
		{
			indx = indx + fl;
			return (ft_check(s1, set, indx, fl));
		}
		i++;
	}
	return (indx);
}

static char	*ft_malloc(char const *s1, size_t start, size_t end)
{
	size_t	i;
	char	*p;

	i = 0;
	p = malloc((end - start) + 2);
	if (p != NULL)
	{
		while (i < (end - start + 1))
		{
			p[i] = s1[start + i];
			i++;
		}
		p[i] = '\0';
	}
	return (p);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	size_t	start;
	size_t	end;
	char	*p;

	len = ft_strlen(s1);
	start = ft_check(s1, set, 0, 1);
	if (start != len)
	{
		end = ft_check(s1, set, (len - 1), -1);
		return (ft_malloc(s1, start, end));
	}
	else
	{
		p = (char *)malloc(1);
		if (p != NULL)
			p[0] = '\0';
		return (p);
	}
}
