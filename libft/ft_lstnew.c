#include "libft.h"

t_list *ft_lstnew(void *content)
{
	t_list * node = NULL;
	node = (t_list *) malloc(sizeof(t_list));
	if (node == NULL)
	{
	    return node;
	}

	node->content = content;
	node->next = NULL;
	return node;
}
