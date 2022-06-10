#include "push_swap.h"

void	ft_pb(t_list **a, t_list **b)
{
	t_list *swp;

	if (*a)
	{
		swp = *a->next;
		ft_lstadd_front(b, *a);
	}
	*a = swp;
	ft_printf("pb")
}