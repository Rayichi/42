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

void	ft_algo(t_list **lsta)
{
	t_list	*lstb;
	int		size;
	int		content;

	content = -1;
	size = ft_lstsize(*lsta);
	while (size-- > 2)
	{
		content = ft_lstmin(*lsta);
		if (content > size / 2)
			while (content++ < size)
				ft_reverse_rotate(lsta);
		else
			while (content--)
				ft_rotate(lsta, 'a');
		ft_push(lsta, &lstb);
	}
		ft_putstr_fd("pb\n", 1);
	if (ft_lstmin(*lsta) > 0)
		ft_rotate(lsta, 'a');
	while(lstb)
	{
		ft_push(&lstb, lsta);
			ft_printf("pa\n");
	}
	ft_clear(lstb);
}