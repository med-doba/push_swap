/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ss.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-doba <med-doba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 17:48:45 by med-doba          #+#    #+#             */
/*   Updated: 2022/06/02 16:38:12 by med-doba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

void	ft_ss(t_ps **stack_a, t_ps **stack_b, int yes)
{
	ft_sa(stack_a, 0);
	ft_sb(stack_b, 0);
	if (yes == 1)
		ft_printf("ss\n");
}
