/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfrancoi <yfrancoi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 17:19:57 by yfrancoi          #+#    #+#             */
/*   Updated: 2022/06/10 17:22:59 by yfrancoi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrb(t_list **a)
{
	ft_reverse_rotate(a);
	ft_printf("rrb\n");
}
