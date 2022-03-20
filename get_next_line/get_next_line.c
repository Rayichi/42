#include "get_next_line.h"

int	ft_read(char *buff, char **line)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (j == 0 && buff[i])
		if (buff[i++] == '\n')
			j = 1;
	*line = ft_strjoin(*line, &buff);
	ft_free(buff);
	return (j);
}

char	*get_next_line(int fd)
{
	static char	*buff[OPEN_MAX];
	char		tmp[ARG_MAX];
	int			stat;
	char		*line;

	stat = 0;
	if (fd < 0 || BUFFER_SIZE < 0)
		return (NULL);
	while (stat == 0 && read(fd, tmp, BUFFER_SIZE))
	{
		buff[fd] = ft_strjoin("", &tmp);
		stat = ft_read(buff[fd], &line);
	}
	return (line);
}