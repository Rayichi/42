/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfrancoi <yfrancoi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 17:23:46 by yfrancoi          #+#    #+#             */
/*   Updated: 2021/11/08 17:23:46 by yfrancoi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_inset(char const c, char const *set)
{
	while (*set)
	{
		if (*set == c)
			return (0);
		set++;
	}
	return (1);
}

static int	ft_size(char const *s1, char const *set)
{
	size_t	i;

	i = 1;
	while (s1 && *s1)
	{
		i = i + ft_inset(*s1, set);
		s1++;
	}
	printf("%d\n",i);
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	char	*str;

	i = 0 ;
	str = malloc(sizeof(char *) * ft_size(s1, set));
	if (!str)
		return (NULL);
	while (*s1)
	{
		if (ft_inset(*s1, set))
		{
			str[i] = *s1;
			i++;
		}
		s1++;
	}
	str[i] = 0;
	return (str);
}

int main(int ac, char **av)
{
	printf("%s\n", ft_strtrim(av[1], av[2]));
	return (0);
}