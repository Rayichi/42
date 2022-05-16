/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfrancoi <yfrancoi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 17:12:06 by yfrancoi          #+#    #+#             */
/*   Updated: 2022/01/22 17:12:06 by yfrancoi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"


typedef struct s_list
{
	int	nb;
	t_list	next
} t_list;

void	ft_swap(t_list **a, int nb);
void	ft_ss(t_list **a, t_list **b);
void	ft_reverse_rotate(t_list **a);
void	ft_rotate(t_list **a);
void	ft_push(t_list **a, t_list **b);


#endif