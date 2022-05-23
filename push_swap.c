/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-doba <med-doba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 18:39:39 by med-doba          #+#    #+#             */
/*   Updated: 2022/05/23 16:37:23 by med-doba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ft(char *stack)
{
	char	**str;
	int	j;
	int	i;

	i = 0;
	j = 0;
	if (stack[i] == '\0')
	{
		ft_printf("stack[i] == '\0'\n");
		exit (1);
	}
	str = ft_split(stack, ' ');
	if (str == NULL)
	{
		ft_printf("str == NULL\n");
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
				ft_printf("ft_isdigit(str[i][j]) == 1\n");
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
	while (ac-- -1)
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
	int		*tab_a;

	head_b = NULL;
	my = (t_var *) malloc (sizeof(t_var) * 1);
	if (my == NULL)
		exit (1);
	if (ac == 1)
	{
		ft_printf("error: must an arg\n");
		exit(1);
	}
	my->n = ft_test(ac, av);
	if (my->n == 1)
		return (0);
	tab_a = ft_double(av, my, my->n);
	head_a = ft_allocation(my->n, tab_a);
	free(tab_a);
	if (ft_order(head_a) == 0)
		return (free(my), 0);
	ft_6_to_10(&head_a, &head_b);
	// while(head_a != NULL)
	// {
	// 	ft_printf("stack_a: %d\n", head_a->data);
	// 	head_a = head_a->next;
	// }
	// while(head_b != NULL)
	// {
	// 	ft_printf("stack_b: %d\n", head_b->data);
	// 	head_b = head_b->next;
	// }
	return (0);
}
