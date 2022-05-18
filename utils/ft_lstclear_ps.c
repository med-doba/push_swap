#include "../push_swap.h"

void ft_lstclear_ps(t_ps **lst, void (*del)(void*))
{
	t_ps	*my;
	while ((*lst)->next != NULL)
	{
		del(*lst);
		my = (*lst)->next;
		free(*lst);
		*lst = my;
	}
}
