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
	size_t	i;

	a = ft_strlen(to_find);
	i = 0;
	if (a == 0)
		return (str);
	while (str[i] && (n - a) >= i)
	{
		if (!ft_strncmp(&str[i], to_find, a))
			return (str + i);
		i++;
	}
	return (NULL);
}
