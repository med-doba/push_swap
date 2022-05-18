/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_double.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-doba <med-doba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 17:14:57 by med-doba          #+#    #+#             */
/*   Updated: 2022/05/18 19:21:15 by med-doba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	*ft_double(char **stack, t_var *my, int k)
{
	my->i = 1;
	my->x = 0;
	my->nbr = malloc(sizeof(int *) * k);
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
					ft_printf("error: double\n");
					exit(1);
				}
				my->h++;
			}
			if (my->x == my->j)
			{
				my->nbr[my->x] = my->y;
				my->x++;
			}
			my->j++;
		}
		my->i++;
	}
	return (my->nbr);
}
