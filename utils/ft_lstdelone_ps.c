#include "../push_swap.h"

void ft_lstdelone_ps(t_ps *lst, void (*del)(void *))
{
	del(lst);
}
