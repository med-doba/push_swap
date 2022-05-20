/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ss.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-doba <med-doba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 17:48:45 by med-doba          #+#    #+#             */
/*   Updated: 2022/05/20 18:50:35 by med-doba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_ss(t_ps **stack_a, t_ps **stack_b, int yes)
{
	ft_sa(stack_a, 0);
	ft_sa(stack_b, 0);
	if (yes == 1)
		ft_printf("ss\n");
}
