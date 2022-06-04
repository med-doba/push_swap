/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-doba <med-doba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 13:33:12 by med-doba          #+#    #+#             */
/*   Updated: 2022/06/04 16:53:23 by med-doba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

void	ft_sa(t_ps **stack_a, int yes)
{
	int		tmp;

	if (*stack_a && (*stack_a)->next)
	{
		tmp = (*stack_a)->data;
		(*stack_a)->data = (*stack_a)->next->data;
		(*stack_a)->next->data = tmp;
	}
	if (yes == 1)
		ft_printf("sa\n");
}
