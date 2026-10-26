/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalah-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 20:52:01 by esalah-e          #+#    #+#             */
/*   Updated: 2026/10/22 15:15:24 by esalah-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	counter;

	counter = 0;
	while (lst)
	{
		lst = lst->next;
		counter++;
	}
	return (counter);
}
