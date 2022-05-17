/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves00.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-doba <med-doba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 18:03:00 by med-doba          #+#    #+#             */
/*   Updated: 2022/05/17 20:10:15 by med-doba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_allocation(t_ps *stack_a, int l)
{
	int		i;
	t_ps	*head;
	t_ps	*node;

	i = 0;
	head = (t_ps *)malloc(sizeof(t_ps) * 1);
	head->data = 5;
	head->next = NULL;
	while (i < l)
	{
		node = (t_ps *)malloc(sizeof(t_ps) * 1);
		node->data = 5;
		ft_add_front(head);
		i++;
	}
}
