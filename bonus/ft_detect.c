/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_detect.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 17:43:49 by med-doba          #+#    #+#             */
/*   Updated: 2022/06/06 00:41:02 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	ft_norminette(t_ps **stack_a, t_ps **stack_b)
{
	ft_putendl_fd("Error", 2);
	free_stack(stack_a);
	free_stack(stack_b);
	exit(1);
}

void	ft_detect(char *str, t_ps **stack_a, t_ps **stack_b)
{
	if (!ft_strcmp(str, "sa\n"))
		ft_sa(stack_a, 0);
	else if (!ft_strcmp(str, "sb\n"))
		ft_sb(stack_b, 0);
	else if (!ft_strcmp(str, "ss\n"))
		ft_ss(stack_a, stack_b, 0);
	else if (!ft_strcmp(str, "pa\n"))
		ft_pa(stack_a, stack_b, 0);
	else if (!ft_strcmp(str, "pb\n"))
		ft_pb(stack_a, stack_b, 0);
	else if (!ft_strcmp(str, "ra\n"))
		ft_ra(stack_a, 0);
	else if (!ft_strcmp(str, "rb\n"))
		ft_rb(stack_b, 0);
	else if (!ft_strcmp(str, "rr\n"))
		ft_rr(stack_a, stack_b, 0);
	else if (!ft_strcmp(str, "rra\n"))
		ft_rra(stack_a, 0);
	else if (!ft_strcmp(str, "rrb\n"))
		ft_rrb(stack_b, 0);
	else if (!ft_strcmp(str, "rrr\n"))
		ft_rrr(stack_a, stack_b, 0);
	else
		ft_norminette(stack_a, stack_b);
}
