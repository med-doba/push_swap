/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_ps.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-doba <med-doba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 19:33:08 by med-doba          #+#    #+#             */
/*   Updated: 2022/06/02 16:36:56 by med-doba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

void	ft_lstclear_ps(t_ps **lst, void (*del)(void*))
{
	t_ps	*my;

	while ((*lst)->next != NULL)
	{
		del(*lst);
		my = (*lst)->next;
		free(*lst);
		*lst = my;
	}
}
