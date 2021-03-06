/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-doba <med-doba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 18:39:39 by med-doba          #+#    #+#             */
/*   Updated: 2022/06/08 15:19:31 by med-doba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	ft_end(char **str, t_var *my)
{
	free(my);
	if (str != NULL)
		ft_free_all(str);
	ft_putendl_fd("Error", 2);
	exit(1);
}

void	ft_handle_arg(char *stack, t_var *my)
{
	char	**str;
	int		j;
	int		i;

	i = 0;
	j = 0;
	str = ft_split(stack, ' ');
	if (str == NULL)
		ft_end(str, my);
	if (stack[i] == '\0')
		ft_end(str, my);
	while (str[i] != NULL)
	{
		j = 0;
		if ((str[i][j] == '+' || str[i][j] == '-') && (str[i][j + 1] != '\0'))
			j++;
		while (str[i][j] != '\0')
		{
			if (ft_isdigit(str[i][j]) == 1)
				ft_end(str, my);
			j++;
		}
		i++;
	}
	ft_free_all(str);
}

int	ft_how_arg(int ac, char **av, t_var *my)
{
	int	i;
	int	x;

	i = 1;
	x = 0;
	while (--ac)
	{
		ft_handle_arg(av[i], my);
		x += ft_calculate(av[i]);
		i++;
	}
	return (x);
}

void	ft_ter(t_var *my)
{
	if (my == NULL)
		exit(1);
	free(my);
	exit(0);
}

int	main(int ac, char *av[])
{
	t_var	*my;

	my = (t_var *) malloc (sizeof(t_var) * 1);
	if (my == NULL || ac == 1)
		ft_ter(my);
	my->head_b = NULL;
	my->n = ft_how_arg(ac, av, my);
	my->tab_a = ft_double(av, my);
	ft_min_max(my);
	my->head_a = ft_allocation(my);
	free(my->tab_a);
	my->str = get_next_line(0, 3);
	while (my->str)
	{
		ft_detect(my->str, &my->head_a, &my->head_b);
		free(my->str);
		my->str = get_next_line(0, 3);
	}
	if (ft_order(my->head_a) == 0 && ft_lstsize_ps(my->head_b) == 0)
		ft_printf("OK\n");
	else
		ft_printf("KO\n");
	free_stack(&my->head_a);
	free_stack(&my->head_b);
	return (free(my), 0);
}
