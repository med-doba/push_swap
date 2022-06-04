/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pop.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-doba <med-doba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 19:08:47 by med-doba          #+#    #+#             */
/*   Updated: 2022/06/04 16:35:22 by med-doba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

t_ps	*ft_pop(t_ps **stack)
{
	t_ps	*top;

	if (*stack == NULL)
		return (NULL);
	top = *stack;
	top->next = NULL;
	*stack = top->next;
	return (top);
}
