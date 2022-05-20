/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-doba <med-doba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 19:03:53 by med-doba          #+#    #+#             */
/*   Updated: 2022/05/20 18:23:47 by med-doba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_push(t_ps **head, t_ps *add)
{
	t_ps	*top;

	if (*head == NULL)
		printf("vide\n");
	top = *head;
	*head = add;
	add->next = top;
}
