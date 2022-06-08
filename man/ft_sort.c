/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-doba <med-doba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 21:28:10 by med-doba          #+#    #+#             */
/*   Updated: 2022/06/08 13:35:06 by med-doba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort(t_var *my)
{
	if (my->n == 2)
		ft_2_num(&my->head_a);
	else if (my->n <= 3)
		ft_3_num(&my->head_a);
	else if (my->n == 4)
		ft_4_num(&my->head_a, &my->head_b);
	else if (my->n == 5)
		ft_5_num(&my->head_a, &my->head_b);
	else if (my->n >= 6 && my->n <= 10)
		ft_6_to_10(&my->head_a, &my->head_b, my);
	else if (my->n > 10)
	{
		ft_index_stack(my->head_a);
		ft_handle_cases(&my->head_a, &my->head_b, my->n);
		ft_repush(&my->head_a, &my->head_b);
	}
}
