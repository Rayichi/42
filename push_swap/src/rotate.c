/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfrancoi <yfrancoi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 17:20:18 by yfrancoi          #+#    #+#             */
/*   Updated: 2022/06/10 17:24:00 by yfrancoi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotate(t_list **a)
{
	t_list	*swp;

	if (a && *a)
	{
		swp = (*a)->next;
		ft_lstadd_back(a, *a);
		(*a)->next = NULL;
		*a = swp;
	}
}
