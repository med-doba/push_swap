#include "libft.h"

void	*del(t_list *lst)
{
	free(lst->content);
}

void ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst);
}
