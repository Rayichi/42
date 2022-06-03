#include "push_swap.h"

long	ft_atoi_spe(char const *str)
{
	int	i;
	int	n;

	i = 1;
	n = 0;
	while (*str && (*str == ' ' || (*str >= 9 && *str <= 13)))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			i = -1;
		str++;
	}
	while (*str && (*str <= '9' && *str >= '0'))
	{
		n = n * 10 + (*str - '0') * i;
		str++;
		if (n < -2147483648 || n > 2147483647)
			return (-2147483649)
	}
	return (n);
}


t_list	*ft_create(char **spl)
{
	t_list	**lst;
	t_list	*new;
	int		i;
	long	nb;

	i = 0;
	while (spl[i])
	{
		nb = ft_atoi_spe(spl[i])
		new = ft_lstnew(nb);
		if (nb < -2147483648 || !new)
		{
			ft_lstclear(lst, ft_lstdelone());
			return (NULL);
		}
		ft_lstadd_back(lst, new)
	}
	return (lst);
}

t_list	*ft_parse(char *str)
{
	int	i;
	t_list	*lst;
	char	**spl;

	i = 0;
	if (!str)
		return (NULL);
	while (str[i])
		if ((str[i] > '9' || str[i] < '0') && str[i] != ' ')
			return (NULL);
	spl = ft_split(str, ' ')
	i = 0;
	while (spl[i])
	{
		ft_lstadd_back(&lst, ft_lstnew(ft_atoi(spl[i++])))
	}
	ft_free(spl);
	return (lst)
}

int	ft_check(t_list *lst)
{
	t_list *lstb;

	while(lst && lst->next != NULL)
	{
		lstb = lst->next;
		while(lstb)
		{
			if (lst->nb == lstb->nb)
				return (1);
			lstb = lstb->next;
		}
		lst = lst ->next;
	}
	return (0);
}