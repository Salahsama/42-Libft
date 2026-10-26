/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalah-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 14:17:28 by esalah-e          #+#    #+#             */
/*   Updated: 2026/10/24 15:45:48 by esalah-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_node;
	       
	if (!lst || !new)
		return ;
	last_node = ft_lstlast(*lst);
	if (!last_node)
	{
		*lst = new;
		return ;
	}
	last_node->next = new;
}
