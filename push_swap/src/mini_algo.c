/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_algo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfrancoi <yfrancoi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 16:22:16 by yfrancoi          #+#    #+#             */
/*   Updated: 2022/06/17 20:00:35 by yfrancoi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	little_chain(t_list **a)
{
	int	min;

	min = ft_lstmin(*a);
	if (!ft_verif(*a))
		return ;
	if (min == 2)
	{
		if ((long)(*a)->content > (long)(*a)->next->content)
			sa(a);
		rra(a);
	}
	else if (min == 1)
	{
		if ((long)ft_lstlast(*a)->content > (long)(*a)->content)
			sa(a);
		else
			ra(a);
	}
	else if ((long)ft_lstlast(*a)->content < (long)(*a)->next->content)
	{
		sa(a);
		ra(a);
	}
}

void	mini_algo(t_list **lsta, t_list **lstb, int size)
{
	int	content;

	while (size-- > 3)
	{
		content = ft_lstmin(*lsta);
		if (content > (size / 2))
			while (content++ <= size)
				rra(lsta);
		else
			while (content--)
				ra(lsta);
		ft_pb(lsta, lstb);
	}
	little_chain(lsta);
	ft_empty(lsta, lstb);
}
