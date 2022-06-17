/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfrancoi <yfrancoi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 16:03:59 by yfrancoi          #+#    #+#             */
/*   Updated: 2022/06/17 16:03:59 by yfrancoi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_verif(t_list *lsta)
{
	int	n;

	if (!lsta)
		return (-1);
	n = (long)lsta->content;
	while (lsta && lsta)
	{
		if ((long)lsta->content < n)
			return (1);
		n = (long)lsta->content;
		lsta = lsta->next;
	}
	return (0);
}
