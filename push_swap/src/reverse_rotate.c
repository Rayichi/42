#include "push_swap.c"

void	ft_reverse_rotate(t_list **a)
{
	t_list	swp;

	swp = ft_lstlast(*a);
	swp = ft_lstadd_front(a, swp);
	swp = ft_lstlast(*a);
	swp->next = NULL;
}