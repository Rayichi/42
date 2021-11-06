/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfrancoi <yfrancoi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 13:37:15 by yfrancoi          #+#    #+#             */
/*   Updated: 2021/11/06 13:43:22 by yfrancoi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	tolower(int c)
{
	if (c >= 'A' || c <= 'Z')
		c = c + ('a' - 'A');
	return (c);
}
