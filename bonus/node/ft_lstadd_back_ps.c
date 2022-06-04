/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_ps.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-doba <med-doba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 19:32:55 by med-doba          #+#    #+#             */
/*   Updated: 2022/06/02 16:37:14 by med-doba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

void	ft_lstadd_back_ps(t_ps **lst, t_ps *new)
{
	while ((*lst)->next != NULL)
		*lst = (*lst)->next;
	(*lst)->next = new;
	new->next = NULL;
}
