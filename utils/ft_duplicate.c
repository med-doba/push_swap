/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_duplicate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-doba <med-doba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 15:12:45 by med-doba          #+#    #+#             */
/*   Updated: 2022/05/14 19:13:26 by med-doba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_duplicate(char *stack)
{
	int	i;
	int	j;

	i = 0;
	j = ft_atoi(stack);
	return (j);
}
int	ft_double(v_list *my)
{
	int	*i;
	i = malloc (sizeof(int) * my->n);
	return (0);
}

int	ft_calculate(char *str)
{
	int	i;
	int	x;

	x = 0;
	i = 0;
	if (str[i] == ' ' && str[i + 1] == '\0')
		exit (1);
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
