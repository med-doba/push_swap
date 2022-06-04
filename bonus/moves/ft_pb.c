/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-doba <med-doba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 18:37:16 by med-doba          #+#    #+#             */
/*   Updated: 2022/06/04 16:25:17 by med-doba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

void	ft_pb(t_ps **head_a, t_ps **head_b, int yes)
{
	t_ps	*tmp;

	if (*head_a == NULL)
	{
		return ;
	}
	tmp = ft_pop(head_a);
	ft_push(head_b, tmp);
	if (yes == 1)
		ft_printf("pb\n");
}
