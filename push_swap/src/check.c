/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfrancoi <yfrancoi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 17:20:42 by yfrancoi          #+#    #+#             */
/*   Updated: 2022/06/10 17:20:42 by yfrancoi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	ft_atoi_spe(char const *str)
{
	int		i;
	long	n;

	i = 1;
	n = 0;
	while (*str && (*str == ' ' || (*str >= 9 && *str <= 13)))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			i = -1;
		str++;
	}
	while (*str && (*str <= '9' && *str >= '0'))
	{
		n = n * 10 + (*str - '0') * i;
		str++;
		if (n < -2147483648 || n > 2147483647)
			return (-2147483649);
	}
	return (n);
}

t_list	*ft_create(char **spl,int ac)
{
	t_list	*lst;
	t_list	*new;
	long	i;
	long	content;

	i = 1;
	lst = NULL;
	new = NULL;
	while (i < ac)
	{
		content = ft_atoi_spe(spl[i]);
		new = ft_lstnew((void *) content);
		if (content < -2147483648 || !new)
		{
			ft_clear(lst);
			return (NULL);
		}
		ft_lstadd_back(&lst, new);
		i++;
	}
	return (lst);
}

int	ft_parse(char **str,int ac)
{
	int i;
	
	i = i;
	if (!str)
		return (0);
	while (i++ < ac )
	{
		if (!ft_format(str[i]))
			return (0);
	}
	return (1);
}

int	ft_check(t_list *lst)
{
	t_list	*lstb;

	while (lst)
	{
		lstb = lst->next;
		while (lstb)
		{
			if ((long) lst->content == (long) lstb->content)
				return (1);
			lstb = lstb->next;
		}
		lst = lst ->next;
	}
	return (0);
}

int	ft_format(char *str)
{
	if (!str || !*str)
		return(0);
	{
		if (str && (*str == '-' || *str == '+'))
			str++;
		while (*str < '9' && *str > '0')
			str++;		
		if (*str)
			return (0);
	}
	return (1);
}
