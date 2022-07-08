#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*nodes;

	if (!lst)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		nodes = ft_lstnew(f(lst->content));
		if (!nodes)
			return (NULL);
	ft_lstadd_back(&new_list, nodes);
	lst = lst->next
	}
	return (new_list);
}