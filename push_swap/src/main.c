#include "push_swap.h"

int	main(int ac, char **av)
{
	t_list	*lsta;
	char	**spl;

	lsta = NULL;
	spl = NULL;
	if (ac != 2)
		return (ft_printf("Error.\n pleaz use : ./push_swap \"your number\"";));
	spl = ft_parse(av[1])
	if (!spl)
		return (ft_printf("Error.\npleaz use numbers only and don't use same numbers"));
	lsta = ft_craate(av[1]);
	if (!lst || ft_cleck(lst))
		return (ft_printf("Error.\npleaz use numbers only and don't use same numbers"));
	ft_algo(lsta);
	ft_lstclear(lsta, ft_lstdelone(t_list **));
	return (0);
}