/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfrancoi <yfrancoi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 17:10:19 by yfrancoi          #+#    #+#             */
/*   Updated: 2021/12/03 15:28:43 by yfrancoi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "./libft/libft.h"
# include <stdarg.h>

int	ft_putnbr_base_p(unsigned long long nb, char *base);
int	ft_putnbr_base(long long nb, char *base);
int	ft_printf(const char *format,...);

#endif