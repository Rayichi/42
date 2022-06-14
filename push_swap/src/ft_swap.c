/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfrancoi <yfrancoi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 17:19:47 by yfrancoi          #+#    #+#             */
/*   Updated: 2022/06/10 17:23:23 by yfrancoi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(t_list **a)
{
	t_list	*swp;

	if (a && *a)
	{
		swp = (*a)->next;
	(*a)->next = swp->next;
	swp->next = *a;
	(*a) = swp;
	}
}
