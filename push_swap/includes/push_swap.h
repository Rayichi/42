/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfrancoi <yfrancoi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 17:12:06 by yfrancoi          #+#    #+#             */
/*   Updated: 2022/06/10 17:21:30 by yfrancoi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"

int		ft_lstmin(t_list *lst);
void	ft_algo(t_list **lsta);
void	ft_clear(t_list *lst);
void	ft_free(char **spl);
void	ft_pa(t_list **a, t_list **b);
void	ft_pb(t_list **a, t_list **b);
void	ra(t_list **a);
void	ra(t_list **b);
void	ft_reverse_rotate(t_list **a);
void	ft_rotate(t_list **a);
void	rr(t_list **a, t_list **b);
void	rra(t_list **a);
void	rrb(t_list **a);
void	rrr(t_list **a, t_list **b);
void	sa(t_list **a);
void	sb(t_list **b);
void	ss(t_list **a, t_list **b);
void	ft_swap(t_list **a);

#endif