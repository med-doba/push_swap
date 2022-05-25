/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-doba <med-doba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 21:28:10 by med-doba          #+#    #+#             */
/*   Updated: 2022/05/25 21:42:36 by med-doba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort(t_ps **stack_a, t_ps **stack_b, t_var *my, int n)
{
	if (n <= 3)
		ft_3_num(stack_a);
	else if (n == 4)
		ft_4_num(stack_a, stack_b);
	else if (n == 5)
		ft_5_num(stack_a, stack_b);
	else if (n >= 6 && n <= 10)
		ft_6_to_10(stack_a, stack_b, my);
	else if (n > 10)
	{
		ft_index_stack(*stack_a);
		ft_handle_cases(stack_a, stack_b, n);
		ft_repush(stack_a, stack_b);
	}
}
