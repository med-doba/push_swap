/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-doba <med-doba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 16:48:41 by med-doba          #+#    #+#             */
/*   Updated: 2022/05/21 16:55:07 by med-doba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rr(t_ps **stack_a, t_ps **stack_b, int yes)
{
	ft_ra(stack_a, 0);
	ft_rb(stack_b, 0);
	if (yes == 1)
		ft_printf("rr\n");
}
