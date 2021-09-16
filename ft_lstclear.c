#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*box;

	while (*lst)
	{
		box = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = box;
	}
}
