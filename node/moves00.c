/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves00.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-doba <med-doba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 18:03:00 by med-doba          #+#    #+#             */
/*   Updated: 2022/05/25 17:05:08 by med-doba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_ps	*ft_allocation(int size, int *tab)
{
	int		i;
	t_ps	*head;
	t_ps	*tmp;

	i = 0;
	head = ft_node_create(tab[i]);
	while (i < size - 1)
	{
		tmp = head;
		i++;
		ft_lstadd_back_ps(&tmp, ft_node_create(tab[i]));
	}
	return (head);
}
