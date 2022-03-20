#include "get_next_line.h"

void	ft_free(**str)
{
	free(*str)
	*str = 0;
}

void	ft_buff(char **buff)
{
	int		i;
	char	*str;

	i = 0;
	while ((*buff)[i] != '\n' && (*buff)[i])
		i++;
	str = malloc(strlen(((*buff)[i]) + 1) * sizeof(char));
	if (!str)
		return(NULL)
	ft_strcpy(&((*buff)[i]), str)
	ft_free(buff);
	*buff = str;
}

char	*ft_read(char *buff, fd)
{
	char	*s;
	char	*tmp;
	char	*ret;

	s = NULL;
	tmp = malloc((BUFFER_SIZE + 1) sizeof(char));
	if (!tmp)
		return (0);
	tmp[BUFFER_SIZE] = 0;
	ret = ft_strjoin(buff[fd], "")
	while (ft_strchr(ret, '\n') && read(fd, tmp, BUFFER_SIZE))
	{
		ret = ft_strjoin(ret, tmp)
		ft_free(&buff[fd]);
		ft_free(&tmp);
	}
	return (ret);
}

char	*get_next_line(int fd)
{
	static char	*buff[OPEN_MAX];
	char		*line;

	line = NULL;
	if (fd > -1)
	{
		buff[fd] = ft_read(buff, fd);
		line = ft_copy(buff[fd], &line);
		ft_buff(buff[fd])
	}
	return (line);
}