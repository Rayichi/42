/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfrancoi <yfrancoi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 17:20:35 by yfrancoi          #+#    #+#             */
/*   Updated: 2022/06/10 17:20:35 by yfrancoi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_list	*lsta;
	t_list	*lstb;

	lsta = NULL;
	lstb = NULL;
	if (ac < 2)
		return (ft_printf("E  rror.\n"));
	if (!ft_parse(av, ac))
		return (ft_printf("Err  or.\n"));
	lsta = ft_create(av, ac);
	if (!lsta || ft_check(lsta))
		return (ft_printf("Erro  r.\n"));
	if (ft_verif(lsta))
		ft_algo(&lsta, &lstb);
	ft_clear(lsta);
	return (0);
}
