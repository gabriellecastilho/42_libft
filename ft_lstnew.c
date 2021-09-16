#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(*new));
	if (!new)
		malloc(0);
	new->content = content;
	new->next = NULL;
	return (new);
}
