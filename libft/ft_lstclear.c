#include "libft.h"

void	del(t_list *lst)
{
	free(lst->content);
}

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*my;
	while ((*lst)->next != NULL)
	{
		del(*lst);
		my = (*lst)->next;
		free(*lst);
		*lst = my;
	}
}
