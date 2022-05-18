#include "../push_swap.h"

void ft_lstadd_front_ps(t_ps **lst, t_ps *new)
{
	new->next = *lst;
       *lst = new;
}
