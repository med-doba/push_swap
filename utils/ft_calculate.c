/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calculate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-doba <med-doba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 15:12:45 by med-doba          #+#    #+#             */
/*   Updated: 2022/05/18 15:53:31 by med-doba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_calculate(char *str)
{
	int	i;
	int	x;

	x = 0;
	i = 0;
	if (str[i] == ' ' && str[i + 1] == '\0')
	{
		ft_printf("str[i] == ' ' && str[i + 1] == '\0'\n");
		exit (1);
	}
	while (str[i] != '\0')
	{
		while (str[i] == ' ')
			i++;
		if (str[i] == '\0')
			break;
		if (str[i] != ' ' && str [i + 1] == ' ')
			x++;
		i++;
		if (str[i - 1] != ' ' && str[i] == '\0')
			x++;
	}
	return (x);
}
