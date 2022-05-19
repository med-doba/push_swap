/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-doba <med-doba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 18:40:48 by med-doba          #+#    #+#             */
/*   Updated: 2022/05/19 13:35:46 by med-doba         ###   ########.fr       */
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
int		ft_order(int *nbr, int n);

#endif
