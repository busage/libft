#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include"libft.h"
#include<stdio.h>

/*typedef struct	s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

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

t_list	*ft_lstlast(t_list *lst)
{
    while (lst)
	{
		if (!lst->next)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*back;

	if (lst == NULL || new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	back = ft_lstlast(*lst);
	new->next = back->next;
	back->next = new;
}*/
void	ft_print_result(t_list *elem)
{
	int		len;

	len = 0;
	while (((char *)elem->content)[len])
		len++;
	write(1, elem->content, len);
	write(1, "\n", 1);
}
int main(int argc, const char *argv[])
{
	/* 1 */ printf("str1 length = %d  = 0\n",ft_strncmp("t", "",0));
	/* 2 */ printf("str2 length = %d  = 0\n",ft_strncmp("1234", "1235", 3));
	/* 3 */ printf("str3 length = %d  < 0\n",ft_strncmp("1234", "1235", 4));
	/* 4 */ printf("str4 length = %d  < 0\n",ft_strncmp("1234", "1235", -1));
	/* 5 */ printf("str5 length = %d  = 0\n",ft_strncmp("", "", 42));
	/* 6 */ printf("str6 length = %d  = 0\n",ft_strncmp("Tripouille", "Tripouille", 42));
	/* 7 */ printf("str7 length = %d  < 0\n",ft_strncmp("Tripouille", "tripouille", 42));
	/* 8 */ printf("str8 length = %d  > 0\n",ft_strncmp("Tripouille", "TriPouille", 42));
	/* 9 */ printf("str9 length = %d  > 0\n",ft_strncmp("Tripouille", "TripouillE", 42));
	/* 10 */ printf("str10 length = %d  < 0\n",ft_strncmp("Tripouille", "TripouilleX", 42));
	/* 11 */ printf("str11 length = %d  > 0\n",ft_strncmp("Tripouille", "Tripouill", 42));
	/* 12 */ printf("str12 length = %d  = 0\n",ft_strncmp("", "1", 0));
	/* 13 */ printf("str13 length = %d  = 0\n",ft_strncmp("1", "", 0));
	/* 14 */ printf("str14 length = %d  < 0\n",ft_strncmp("", "1", 1));
	/* 15 */ printf("str15 length = %d  > 0\n",ft_strncmp("1", "", 1));
	/* 16 */ printf("str16 length = %d  = 0\n",ft_strncmp("", "", 1));
	/* 17 */ printf("str17 length = %d  = 0\n",ft_strncmp("test\200", "test\0", 6));
	/* 18 */ printf("str18 length = %d  = 0\n",strncmp("test\200", "test\0", 6));
	write(1, "\n", 1);
	return (0);
}
