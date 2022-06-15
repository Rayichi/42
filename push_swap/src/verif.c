#include "push_swap.h"

int	ft_verif(t_list *lsta)
{
	int	n;

	if (!lsta)
		return (-1);
	n = (long)lsta->content;
	while(lsta && lsta)
	{
		if ((long)lsta->content < n)
			return(1);
		n = (long)lsta->content;
		lsta = lsta->next;
	}
	return (0);
}
