#include "push_swap.c"

void	ft_clear(t_list *lst)
{
	t_list	*next;

	next = NULL
	while (lst)
	{
		next = lst->next;
		free(lst->value);
		free(lst->next);
		free(lst);
		lst = next;
	}
}

void	ft_free(char **spl)
{
	int	i;

	i = 0;
	while (spl[i])
		free(spl[i++]);
	free(spl);
}