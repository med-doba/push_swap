/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_order.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 11:51:21 by med-doba          #+#    #+#             */
/*   Updated: 2022/05/21 22:50:39 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_order(t_ps *node)
{
	while (node->next != NULL)
	{
		if (node->data > node->next->data)
			return (1);
		node = node->next;
	}
	return (0);
}
