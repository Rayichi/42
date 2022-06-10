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
	char	**spl;

	lsta = NULL;
	spl = NULL;
	if (ac != 2)
		return (ft_printf("Error.\npleaz use : ./push_swap \"your number\""));
	spl = ft_parse(av[1])
	if (!spl)
		return (ft_printf("Error.\npleaz use numbers only and don't use same numbers"));
	lsta = ft_craate(av[1]);
	if (!lst || ft_cleck(lst))
		return (ft_printf("Error.\npleaz use numbers only and don't use same numbers"));
	ft_algo(lsta);
	ft_clear(lsta);
	ft_free(spl);
	return (0);
}
