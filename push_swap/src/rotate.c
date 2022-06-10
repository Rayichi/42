#include "push_swap.c"

void	ft_rotate(t_list **a)
{
	t_list *swp;

	swp = ft_lstlast(*a)
	swp->next = *a
	*a = swp->next;
	swp = swp->next;
	swp->next = NULL;
}