/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_double.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-doba <med-doba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 17:14:57 by med-doba          #+#    #+#             */
/*   Updated: 2022/06/02 16:35:42 by med-doba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

long	*ft_double(char **stack, t_var *my, int k)
{
	my->i = 1;
	my->x = 0;
	my->nbr = malloc(sizeof(long *) * k);
	while (stack[my->i] != NULL)
	{
		my->j = 0;
		my->ptr = ft_split(stack[my->i], ' ');
		while (my->ptr[my->j] != NULL)
		{
			my->y = ft_atoi(my->ptr[my->j]);
			my->h = 0;
			while (my->h < my->x)
			{
				if (my->nbr[my->h] == my->y)
				{
					ft_putendl_fd("Error", 2);
					exit(1);
				}
				my->h++;
			}
			if (my->x == my->h)
			{
				my->nbr[my->x] = my->y;
				my->x++;
			}
			my->j++;
		}
		my->i++;
		ft_free_all(my->ptr);
	}
	return (my->nbr);
}
