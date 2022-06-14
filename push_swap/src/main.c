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

static void	chain(t_list *lst)
{
	int i = 0;
	while (lst)
	{
		ft_printf("%d : %d\n", i++, lst->content);
		lst = lst->next;
	}
	ft_printf("%s\n\n", lst);
}

int	main(int ac, char **av)
{
	t_list	*lsta;
	t_list	*lstb;
	char	**spl;

	lsta = NULL;
	lstb = NULL;
	spl = NULL;
	if (ac != 2)
		return (ft_printf("Error.\npleaz use : ./push_swap \"your number\""));
	spl = ft_parse(av[1]);
	if (!spl)
		return (ft_printf("Error.\npleaz use numbers only and don't use same numbers\n"));
	lsta = ft_create(spl);
	if (!lsta || ft_check(lsta))
		return (ft_printf("Error.\npleaz use numbers only and don't use same numbers"));
	ft_algo(&lsta, &lstb);
	//ft_clear(lsta);
	//ft_free(spl);
	return (0);
}
