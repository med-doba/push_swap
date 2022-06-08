/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calculate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-doba <med-doba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 15:12:45 by med-doba          #+#    #+#             */
/*   Updated: 2022/06/08 13:01:29 by med-doba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_calculate(char *str, t_var *my)
{
	int	i;
	int	x;

	x = 0;
	i = 0;
	if (str[i] == ' ' && str[i + 1] == '\0')
	{
		ft_putendl_fd("Error", 2);
		free(my);
		exit(1);
	}
	while (str[i] != '\0')
	{
		while (str[i] == ' ')
			i++;
		if (str[i] == '\0')
			break ;
		if (str[i] != ' ' && str [i + 1] == ' ')
			x++;
		i++;
		if (str[i - 1] != ' ' && str[i] == '\0')
			x++;
	}
	return (x);
}
