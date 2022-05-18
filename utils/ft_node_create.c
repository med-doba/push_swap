#include "../push_swap.h"

t_ps	*ft_node_create(int data)
{
	t_ps	*node;

	node = (t_ps *)malloc(sizeof(t_ps));
	if (node == NULL)
		return (NULL);
	node->data =  data;
	node->next = NULL;
	return(node);
}
