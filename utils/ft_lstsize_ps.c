#include "../push_swap.h"

int ft_lstsize_ps(t_ps *lst)
{
	int	i;

	i = 0;
	while(lst->next != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
