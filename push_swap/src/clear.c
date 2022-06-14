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
		free(lst->content);
		free(lst->next);
		free(lst);
		lst = next;
	}
}

void	ft_free(char **spl)
{
	int	i;

	i = 0;
	while (spl[i])
		free(spl[i++]);
	free(spl);
}
