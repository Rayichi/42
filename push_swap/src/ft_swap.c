#include "push_swap.c"

void	ft_swap(t_list **a)
{
	t_list	*swp;

	swp = *a->next;
	a->next = swp->next;
	swp->next = *a;
	*a = swp;
}