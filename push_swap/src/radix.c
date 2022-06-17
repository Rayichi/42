/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfrancoi <yfrancoi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 19:12:05 by yfrancoi          #+#    #+#             */
/*   Updated: 2022/06/17 20:37:18 by yfrancoi         ###   ########lyon.fr   */
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

void	ft_empty(t_list **a, t_list **b)
{
	while (*b)
		ft_pa(a, b);
}

void	ft_radix(t_list **a, t_list **b, int size)
{
	int		i;
	long	nb;
	int		min;
	int		j;

	i = 1;
	j = 0;
	while (i < 17)
	{
		min = ft_pow(2, i - 1) - 1;
		nb = (ft_pow(2, i));
		j = 0;
		while (j < size)
		{
			if ((((long)(*a)->content % nb) - min) > 0)
				ra(a);
			else
				ft_pb(a, b);
			j++;
		}
		ft_empty(a, b);
		i++;
		if (!ft_verif(*a))
			return ;
	}
}
