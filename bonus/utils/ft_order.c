/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_order.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-doba <med-doba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 11:51:21 by med-doba          #+#    #+#             */
/*   Updated: 2022/06/02 16:37:46 by med-doba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

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
