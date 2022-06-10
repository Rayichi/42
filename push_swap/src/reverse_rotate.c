/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfrancoi <yfrancoi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 17:19:49 by yfrancoi          #+#    #+#             */
/*   Updated: 2022/06/10 17:23:06 by yfrancoi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_reverse_rotate(t_list **a)
{
	t_list	*swp;

	swp = ft_lstlast(*a);
	ft_lstadd_front(a, swp);
	*a = swp;
	swp = ft_lstlast(*a);
	swp->next = NULL;
}
