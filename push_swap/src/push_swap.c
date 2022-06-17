/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfrancoi <yfrancoi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 18:30:38 by yfrancoi          #+#    #+#             */
/*   Updated: 2022/06/17 19:58:01 by yfrancoi         ###   ########lyon.fr   */
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

	size = ft_lstsize(*lsta);
	if (size == 2)
		ra(lsta);
	else if (size == 3)
		little_chain(lsta);
	else if (size < 20)
		mini_algo(lsta, lstb, size);
	else
		ft_radix(lsta, lstb, size);
}
