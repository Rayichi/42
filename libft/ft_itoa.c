/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfrancoi <yfrancoi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 16:58:25 by yfrancoi          #+#    #+#             */
/*   Updated: 2021/11/06 17:20:46 by yfrancoi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_size(int n)
{
	int	i;

	i = 1;
	while (n < 0 || n > 9)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

char	*ft_fill(long n, char *str)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		str[i++] = '-';
		n = -n;
	}
	while (n > 9)
	{
		str[i++] = '0' + n % 10
		n = n / 10;
	}
	str[i++] = '0' + n;
	str[i] = 0;
	return (str);
}


char	*ft_itoa(int n)
{
	char	*str;
	int		size;

	size = ft_size(n);
	str = malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	return (ft_fill(n , str))
}