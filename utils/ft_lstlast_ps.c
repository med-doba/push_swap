#include "../push_swap.h"

t_ps	*ft_lstlast_ps(t_ps *lst)
{
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
