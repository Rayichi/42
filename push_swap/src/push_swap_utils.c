#include "push_swap.h"

void	ft_swap(t_list **a, int nb)
{
	t_list	*tmp;
	t_list	*swp;
	int		value;

	swp = *a;
	tmp = swp->next;
	value = swp->nb;
	swp->nb = tmp->nb;
	tmp->nb = value;
	ft_printf("rr%c\n", ('a' + nb));
}

void	ft_ss(t_list **a, t_list **b)
{
	t_list	*tmp;
	t_list	*swp;
	int		value;

	swp = *a;
	tmp = swp->next;
	value = swp->nb;
	swp->nb = tmp->nb;
	tmp->nb = value;
	swp = *b;
	tmp = swp->next;
	value = swp->nb;
	swp->nb = tmp->nb;
	tmp->nb = value;
	ft_putstr_fd("ss", 1);
}

void	ft_reverse_rotate(t_list **a, char c)
{
	t_list *swp;

	swp = *a;
	*a = swp->next;
	ft_lstadd_back(a, swp);
	ft_printf("rr%c\n", c);	
}

void	ft_rotate(t_list **a, char c)
{
	t_list *swp;

	swp = ft_lstlast(*a)
	swp-next = *a
	*a = swp;
	ft_lstadd_front(a, swp);
	ft_printf("r%c\n", c);	
}

void	ft_push(t_list **a, t_list **b)
{
	t_list *swp;

	if (*a)
	{
		swp = *a->next;
		ft_lstadd_front(b, *a);
	}
}