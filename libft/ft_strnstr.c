/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfrancoi <yfrancoi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 13:00:32 by yfrancoi          #+#    #+#             */
/*   Updated: 2021/11/06 13:00:32 by yfrancoi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *str, char *to_find, size_t n)
{
	size_t	a;

	a = ft_strlen(to_find);
	if (a > n)
		a = n;
	while (str && *str)
	{
		if (!ft_strncmp(str, to_find, a))
			return (str);
		str++;
	}
	return (NULL);
}
