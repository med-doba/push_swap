/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 18:39:39 by med-doba          #+#    #+#             */
/*   Updated: 2022/05/18 21:45:06 by marvin           ###   ########.fr       */
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

int	main(int ac, char *av[])
{
	int	i;
	t_var	*my;
	int	*tab;
	t_ps	*head;

	i = 1;
	my = (t_var *) malloc (sizeof(t_var) * 1);
	my->n = 0;
	if (my == NULL)
	{
		printf("hamboula\n");
		exit (1);
	}
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
	tab = ft_double(av, my, my->n);
	head = ft_allocation(my->n, tab);
	free(tab);
	while(head != NULL)
	{
		ft_printf("%d\n", head->data);
		head = head->next;
	}
	return (0);
}
