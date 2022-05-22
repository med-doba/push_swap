/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-doba <med-doba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 18:40:48 by med-doba          #+#    #+#             */
/*   Updated: 2022/05/22 18:05:42 by med-doba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include "libft/libft.h"
# include "ft_printf/ft_printf.h"

typedef struct p_var{
	char	**ptr;
	char	*str;
	int		*nbr;
	int		n;
	int		i;
	int		j;
	int		x;
	int		y;
	int		h;
}t_var;

typedef struct node{
	int			data;
	struct node	*next;
}t_ps;

int		ft_digits(char *stack);
int		ft_nbr(char str);
int		ft_duplicate(char *stack);
int		ft_signe(char *stack);
int		ft_calculate(char *str);
int		*ft_double(char **stack, t_var *my, int k);
void	ft_free_all(char **str);
//node
t_ps	*ft_node_create(int data);
int		ft_lstsize_ps(t_ps *lst);
t_ps	*ft_lstlast_ps(t_ps *lst);
void	ft_lstdelone_ps(t_ps *lst, void (*del)(void *));
void	ft_lstclear_ps(t_ps **lst, void (*del)(void*));
void	ft_lstadd_front_ps(t_ps **lst, t_ps *new);
void	ft_lstadd_back_ps(t_ps **lst, t_ps *new);
t_ps	*ft_allocation(int size, int *tab);
int		ft_order(t_ps *node);
void	ft_push(t_ps **head, t_ps *add);
t_ps	*ft_pop(t_ps **stack);
void	ft_sa(t_ps **stack_a, int yes);
void	ft_sb(t_ps **stack_b, int yes);
void	ft_ss(t_ps **stack_a, t_ps **stack_b, int yes);
void	ft_pa(t_ps **head_a, t_ps **head_b, int yes);
void	ft_pb(t_ps **head_a, t_ps **head_b, int yes);
void	ft_ra(t_ps **stack_a, int yes);
void	ft_rb(t_ps **stack_b, int yes);
void	ft_rr(t_ps **stack_a, t_ps **stack_b, int yes);
void	ft_rra(t_ps **stack_a, int yes);
void	ft_rrb(t_ps **stack_a, int yes);
void	ft_rrr(t_ps **stack_a, t_ps **stack_b, int yes);
void	ft_3_num(t_ps **stack_a);
void	ft_4_num(t_ps **stack_a, t_ps **stack_b);
#endif
