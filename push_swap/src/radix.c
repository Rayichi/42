/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfrancoi <yfrancoi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 19:12:05 by yfrancoi          #+#    #+#             */
/*   Updated: 2022/06/17 19:40:39 by yfrancoi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	ft_pow(long x, int n)
{
	long	nb;

	nb = 1;
	while (n--)
		nb = nb * x;
	return (nb);
}

void ft_empty(t_list **a, t_list **b)
{
	while (*b)
		ft_pa(a, b);
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

void	ft_radix(t_list **a, t_list **b, int size)
{
	int	i;
	long	nb;
	int j;

	i = 1;
	j = 0;
	while (i < 17)
	{
		nb = (ft_pow(2, i));
		j = 0;
		while (j < size)
		{
			//ft_printf("\n%d \n", nb);
			if ((((long)(*a)->content % nb) - (ft_pow(2, i - 1) - 1)) > 0)
				ra(a);
			else
				ft_pb(a, b);
			j++;
		}
		ft_empty(a, b);
		i++;
		//chain(*a);
		if (!ft_verif(*a))
			return;
	}
}