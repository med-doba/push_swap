/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 18:39:39 by med-doba          #+#    #+#             */
/*   Updated: 2022/06/07 07:59:30 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void	ft_handle_arg(char *stack)
{
	char	**str;
	int	j;
	int	i;

	i = 0;
	j = 0;
	if (stack[i] == '\0')
	{
		ft_putendl_fd("Error", 2);
		exit (1);
	}
	str = ft_split(stack, ' ');
	if (str == NULL)
	{
		ft_putendl_fd("Error", 2);
		exit(1);
	}
	while (str[i] != NULL)
	{
		j = 0;
		if ((str[i][j] == '+' || str[i][j] == '-') && (str[i][j + 1] != '\0'))
			j++;
		while(str[i][j] != '\0' )
		{
			if (ft_isdigit(str[i][j]) == 1)
			{
				ft_putendl_fd("Error", 2);
				exit(1);
			}
			j++;
		}
		i++;
	}
	ft_free_all(str);
}

int	ft_how_arg(int ac, char **av)
{
	int	i;
	int	x;

	i = 1;
	x = 0;

	while (--ac)
	{
		ft_handle_arg(av[i]);
		x += ft_calculate(av[i]);
		i++;
	}
	return (x);
}

int	main(int ac, char *av[])
{
	t_var	*my;
	t_ps	*head_a;
	t_ps	*head_b;
	long	*tab_a;

	head_b = NULL;
	my = (t_var *) malloc (sizeof(t_var) * 1);
	if (my == NULL)
		exit (1);
	if (ac == 1)
	{
		free(my);
		exit(0);
	}
	my->n = ft_how_arg(ac, av);
	if (my->n == 1)
		return (free(my), 0);
	tab_a = ft_double(av, my, my->n);
	ft_min_max(tab_a, my->n);
	head_a = ft_allocation(my->n, tab_a);
	free(tab_a);
	if (ft_order(head_a) == 0)
		return (free(my), free_stack(&head_a), 0);
	ft_sort(&head_a, &head_b, my, my->n);
	free_stack(&head_a);
	return (free(my), 0);
}
