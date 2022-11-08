
#include "libft.h"

int		ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*temp;

	count = 0;
	if (!lst)
		return (count);
	temp = lst;
	while (temp->next != NULL)
	{
		count++;
		temp = temp->next;
	}
	if (temp->next == NULL)
		count++;
	return (count);
}
