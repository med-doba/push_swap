/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-doba <med-doba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 18:29:54 by med-doba          #+#    #+#             */
/*   Updated: 2022/06/02 16:38:25 by med-doba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

void	ft_rrr(t_ps **stack_a, t_ps **stack_b, int yes)
{
	ft_rra(stack_a, 0);
	ft_rrb(stack_b, 0);
	if (yes == 1)
		ft_printf ("rrr\n");
}
