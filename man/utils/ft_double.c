/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_double.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-doba <med-doba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 17:14:57 by med-doba          #+#    #+#             */
/*   Updated: 2022/06/07 19:45:47 by med-doba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

long	*ft_double(char **stack, t_var *my, int k)
{
	my->i = 0;
	my->x = 0;
	my->nbr = malloc(sizeof(long *) * k);
	while (stack[++my->i] != NULL)
	{
		my->j = -1;
		my->ptr = ft_split(stack[my->i], ' ');
		while (my->ptr[++my->j] != NULL)
		{
			my->y = ft_atoi(my->ptr[my->j]);
			my->h = -1;
			while (++my->h < my->x)
			{
				if (my->nbr[my->h] == my->y)
					ft_end();
			}
			if (my->x == my->h)
			{
				my->nbr[my->x] = my->y;
				my->x++;
			}
		}
		ft_free_all(my->ptr);
	}
	return (my->nbr);
}
