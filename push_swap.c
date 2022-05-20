/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-doba <med-doba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 18:39:39 by med-doba          #+#    #+#             */
/*   Updated: 2022/05/20 18:22:32 by med-doba         ###   ########.fr       */
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
	t_ps	*head;
	int		*tab;

	my = (t_var *) malloc (sizeof(t_var) * 1);
	if (my == NULL)
		exit (1);
	if (ac == 1)
	{
		ft_printf("must an arg\n");
		exit(1);
	}
	my->n = ft_test(ac, av);
	if (my->n == 1)
		return (0);
	tab = ft_double(av, my, my->n);
	if (ft_order(tab, my->n) == 0)
		return (free(tab), free(my), 0);
	head = ft_allocation(my->n, tab);
	free(tab);
	ft_sa(&head, 1);
	while(head != NULL)
	{
		ft_printf("%d\n", head->data);
		head = head->next;
	}
	return (0);
}
