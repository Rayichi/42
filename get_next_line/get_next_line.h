/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfrancoi <yfrancoi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 18:16:16 by yfrancoi          #+#    #+#             */
/*   Updated: 2021/11/29 18:26:18 by yfrancoi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

int		ft_strlen(char	*s);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strcpy(char *s1, char *str);
char	*ft_copy(char *s1);
char	*get_next_line(int fd);
char	*ft_strchr(char *str, int c);

#endif