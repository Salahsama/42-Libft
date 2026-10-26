/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalah-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 18:41:39 by esalah-e          #+#    #+#             */
/*   Updated: 2026/10/21 18:51:41 by esalah-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_list	*ft_lstnew(void *content)
{
	t_list	*node;
	node = malloc(sizeof(*node));
	if (node == NULL)
		return (NULL);
	(*node).content = content;
	(*node).next = NULL;
	return (node);
}
