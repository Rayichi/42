#include "get_next_line.h"

static long long	ft_strlen(char *str)
{
	inti;

	i = 0;
	while(str && str[i])
		i++;
	return (i);
}

static long long	ft_strlen_nl(char *str)
{
	inti;

	i = 0;
	while(str && str[i] && str[i] != '\n')
		i++;
	return (i);
}

char	*ft_strjoin(char *buff, char **line)
{
	char		*str;
	long long	i;
	long long	j;

	if (!buff || !line)
		return (0);
	str = malloc(sizeof(char) * ( 1 + ft_strlen_nl(*buff) + ft_strlen(*line)));
	if (!str)
		return(0);
	i = 0;
	while (*line && line[0][i])
		str[j++] = (*line)[i++];
	i = 0;
	while (buff[i] && buff[i] != '\n')
		str[j++] = (*buff)[i++];
	ft_free(line);
	str[i] = 0;
	return (str);
}

void	ft_free(void *ptr)
{
	if (!ptr)
		return;
	free(*ptr)
	ptr = NULL;
}