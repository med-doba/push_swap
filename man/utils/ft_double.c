/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_double.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-doba <med-doba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 17:14:57 by med-doba          #+#    #+#             */
/*   Updated: 2022/06/08 15:18:27 by med-doba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_dbl_error(t_var *my)
{
	free(my->nbr);
	free(my->ptr);
	free(my);
	ft_putendl_fd("Error", 2);
	exit(1);
}

void	ft_while(t_var *my)
{
	while (my->ptr[++my->j] != NULL)
	{
		my->y = ft_atoi(my->ptr[my->j]);
		my->h = -1;
		while (++my->h < my->x)
		{
			if (my->nbr[my->h] == my->y)
				ft_dbl_error(my);
		}
		if (my->x == my->h)
		{
			my->nbr[my->x] = my->y;
			my->x++;
		}
	}
}

long	*ft_double(char **stack, t_var *my)
{
	my->nbr = malloc(sizeof(long *) * my->n);
	if (my->nbr == NULL)
		return (free(my), exit(1), NULL);
	while (stack[++my->i] != NULL)
	{
		my->j = -1;
		my->ptr = ft_split(stack[my->i], ' ');
		if (my->ptr == NULL)
			return (free(my), free(my->nbr), exit(1), NULL);
		ft_while(my);
		ft_free_all(my->ptr);
	}
	return (my->nbr);
}
