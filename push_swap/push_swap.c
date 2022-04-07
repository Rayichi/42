/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfrancoi <yfrancoi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 18:30:38 by yfrancoi          #+#    #+#             */
/*   Updated: 2022/03/24 16:22:02 by yfrancoi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(t_list *, int nb)
{
	t_list	*tmp;
	int		value;

	tmp = a->next;
	value = a->nb;
	a->nb = tmp->nb;
	tmp->nb = value;
	ft_putchar_fd('s', 1);
	ft_putchar_fd('a' + nb, 1);
}

