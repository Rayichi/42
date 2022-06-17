/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfrancoi <yfrancoi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 18:30:38 by yfrancoi          #+#    #+#             */
/*   Updated: 2022/06/17 19:51:24 by yfrancoi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_lstmin(t_list *lsta)
{
	int			i;
	int			k;
	long int	min;
	t_list		*lst;

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

void	ft_algo(t_list **lsta, t_list **lstb)
{
	int		size;
	int		content;

	content = -1;
	size = ft_lstsize(*lsta);
	if (size == 2)
		ra(lsta);
	else if (size == 3)
		little_chain(lsta);
	else if (size < 20)
	{
		while (size-- > 3)
			{
				content = ft_lstmin(*lsta);
				if(content > (size / 2))
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
	else
		ft_radix(lsta, lstb, size);
}
