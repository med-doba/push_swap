#include "../push_swap.h"

void ft_lstadd_back_ps(t_ps **lst, t_ps *new)
{
	while ((*lst)->next != NULL)
		*lst = (*lst)->next;
	(*lst)->next = new;
	new->next = NULL;
}
