/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfrancoi <yfrancoi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 17:20:33 by yfrancoi          #+#    #+#             */
/*   Updated: 2022/06/10 17:25:31 by yfrancoi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pa(t_list **a, t_list **b)
{
	t_list	*swp;

	swp = NULL;
	if (b && *b)
	{
		swp = (*b)->next;
		(*b)->next = NULL;
		ft_lstadd_front(a, *b);
	}
	*b = swp;
	ft_printf("pa\n");
}
