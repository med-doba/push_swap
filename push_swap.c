/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-doba <med-doba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 18:39:39 by med-doba          #+#    #+#             */
/*   Updated: 2022/05/14 19:44:10 by med-doba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_all(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

void	ft_ft(char *stack)
{
	char	**str;
	int	j;
	int	i;

	i = 0;
	j = 0;
	if (stack[i] == '\0')
		exit (1);
	str = ft_split(stack, ' ');
	if (str == NULL)
		exit(1);
	while (str[i] != NULL)
	{
		j = 0;
		if ((str[i][j] == '+' || str[i][j] == '-') && (str[i][j + 1] != '\0'))
			j++;
		while(str[i][j] != '\0' )
		{
			if (ft_isdigit(str[i][j]) == 1)
				exit(1);
			j++;
		}
		i++;
	}
	free_all(str);
}

int	main(int ac, char *av[])
{
	int	i;
	v_list	*my;

	i = 1;
	my = (v_list *) malloc (sizeof(v_list) * 1);
	if (my == NULL)
		exit (1);
	if (ac == 1)
	{
		ft_printf("must an arg\n");
		exit(1);
	}
	while (ac-- - 1)
	{
		ft_ft(av[i]);
		my->n += ft_calculate(av[i]);
		i++;
	}
	ft_printf("%d\n", my->n);
	return (0);
}
