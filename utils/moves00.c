/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves00.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-doba <med-doba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 18:03:00 by med-doba          #+#    #+#             */
/*   Updated: 2022/05/18 17:29:31 by med-doba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_ps	*ft_allocation(char **av)
{
	int		i;
	t_ps	*head;
	t_ps	*tmp;

	i = 1;
	head = ft_node_create(ft_atoi(av[i]));
	while (av[++i] != NULL)
	{
		tmp = head;
		ft_lstadd_back_ps(&tmp, ft_node_create(ft_atoi(av[i])));
	}
	return (head);
}
