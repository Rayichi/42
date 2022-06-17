/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfrancoi <yfrancoi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 17:20:39 by yfrancoi          #+#    #+#             */
/*   Updated: 2022/06/10 17:20:39 by yfrancoi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_clear(t_list *lst)
{
	t_list	*next;

	next = NULL;
	while (lst)
	{
		next = lst->next;
		free(lst);
		lst = next;
	}
}
