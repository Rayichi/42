/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfrancoi <yfrancoi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 18:30:38 by yfrancoi          #+#    #+#             */
/*   Updated: 2022/03/24 16:22:02 by yfrancoi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_lstmin(t_list *lst)
{
	int	i;
	int k;
	int min;

	i = 0;
	k = 0;
	min = lst->nb;
	while (lst)
	{
		if (lst->nb < min)
		{
			min = lst->nb;
			k = i;
		}
		i++;
		lst = lst->next;
	}
	return (k);
}

void	ft_algo(t_list **lsta)
{
	t_list	*lstb;
	int		size;
	int		nb;

	nb = -1;
	size = ft_lstsize(lsta);
	while (size--)
	{
		nb = ft_lstmin(lsta)
		if (nb > size / 2)
			while (nb++ < size)
				ft_reverse_rotate(lsta, 'a');
		}
		else
			while (nb--)
				ft_rotate(lsta, 'a');
		ft_push(lsta, lstb);
		ft_putstr_fd("pb", 1);
	while(*lstb)
	{
		ft_push(lstb, lsta)
			ft_putstr_fd("pa", 1);
	}
}