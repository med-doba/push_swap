/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 18:39:39 by med-doba          #+#    #+#             */
/*   Updated: 2022/06/06 00:45:48 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"


void	ft_ft(char *stack)
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

int	ft_test(int ac, char **av)
{
	int	i;
	int	x;

	i = 1;
	x = 0;

	while (--ac)
	{
		ft_ft(av[i]);
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
	char	*str;

	head_b = NULL;
	my = (t_var *) malloc (sizeof(t_var) * 1);
	if (my == NULL)
		exit (1);
	if (ac == 1)
	{
		free(my);
		exit(0);
	}
	my->n = ft_test(ac, av);
	tab_a = ft_double(av, my, my->n);
	ft_min_max(tab_a, my->n);
	head_a = ft_allocation(my->n, tab_a);
	free(tab_a);
	str = get_next_line(0, 3);
	while (str)
	{
		ft_detect(str, &head_a, &head_b);
		free(str);
		str = get_next_line(0, 3);
	}
	if (ft_order(head_a) == 0 && ft_lstsize_ps(head_b) == 0)
		ft_printf("OK\n");
	else
		ft_printf("KO\n");
	free_stack(&head_a);
	free_stack(&head_b);
	return (free(my), 0);
}
