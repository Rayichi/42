/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfrancoi <yfrancoi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 17:24:03 by yfrancoi          #+#    #+#             */
/*   Updated: 2021/11/08 17:25:03 by yfrancoi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void *ptr, int value, size_t num)
{
	size_t	i;

	i = 0;
	while (((unsigned char *)ptr)[i] && num--)
	{
		if (((unsigned char *)ptr)[i] == value)
			return ((unsigned char *)&ptr[i]);
		i++;
	}
	return ((unsigned char *)0);
}
