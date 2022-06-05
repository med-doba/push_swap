/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 18:37:16 by med-doba          #+#    #+#             */
/*   Updated: 2022/06/05 18:18:36 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

void	ft_pa(t_ps **head_a, t_ps **head_b, int yes)
{
	t_ps	*tmp;

	if (*head_b == NULL)
		return ;
	tmp = ft_pop(head_b);
	ft_push(head_a, tmp);
	if (yes == 1)
		ft_printf("pa\n");
}
