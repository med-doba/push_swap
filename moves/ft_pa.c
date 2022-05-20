/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-doba <med-doba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 18:37:16 by med-doba          #+#    #+#             */
/*   Updated: 2022/05/20 19:07:06 by med-doba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_pa(t_ps **head_a, t_ps **head_b, int yes)
{
	t_ps *tmp;

	if (*head_b == NULL)
		return ;
	tmp = ft_pop(head_b);
	ft_push(head_a, tmp);
	if (yes == 1)
		ft_printf("pa\n");
}
