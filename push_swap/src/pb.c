/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfrancoi <yfrancoi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 17:20:30 by yfrancoi          #+#    #+#             */
/*   Updated: 2022/06/10 17:25:36 by yfrancoi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pb(t_list **a, t_list **b)
{
	t_list	*swp;

	swp = NULL;
	if (a && *a)
	{
		swp = (*a)->next;
		(*a)->next = NULL;
		ft_lstadd_front(b, *a);
	}
	*a = swp;
	ft_printf("pb\n");
}
