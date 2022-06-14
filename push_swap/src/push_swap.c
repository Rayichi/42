/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfrancoi <yfrancoi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 18:30:38 by yfrancoi          #+#    #+#             */
/*   Updated: 2022/06/10 17:23:14 by yfrancoi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_lstmin(t_list *lsta)
{
	int	i;
	int k;
	long int min;
	t_list	*lst;

	i = 0;
	k = 0;
	lst = lsta;
	min = (long int) lst->content;
	while (lst)
	{
		if ((long int) lst->content < min)
		{
			min = (long int) lst->content;
			k = i;
		}
		i++;
		lst = lst->next;
	}
	return (k);
}

static void	chain(t_list *lst)
{
	int i = 0;
	while (lst)
	{
		ft_printf("%d : %d\n", i++, lst->content);
		lst = lst->next;
	}
	ft_printf("%s\n\n", lst);
}


void	ft_algo(t_list **lsta, t_list **lstb)
{
	int		size;
	int		content;

	content = -1;
	size = ft_lstsize(*lsta);
	ft_printf("%d", size);
	while (size -- > 2)
	{
		content = ft_lstmin(*lsta);
		if (content > size / 2)
			while (content++ <= size)
				rra(lsta);
		else
			while (content--)
				ra(lsta);
		ft_pb(lsta, lstb);
	}
	if (ft_lstmin(*lsta) > 0)
		ra(lsta);
	while(*lstb)
		ft_pa(lsta, lstb);
	chain(*lsta);
}

