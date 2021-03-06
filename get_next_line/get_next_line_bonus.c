#include "get_next_line_bonus.h"

char	*ft_buff(char *buff)
{
	int		i;
	char	*str;

	i = 0;
	while (buff && buff[i] != '\n' && buff[i] != 0)
		i++;
	if (buff && buff[i] == '\n')
		i++;
	str = malloc((ft_strlen(&buff[i]) + 1) * sizeof(char));
	if (!str)
	{
		free (buff);
		return (NULL);
	}
	str = ft_strcpy(&buff[i], str);
	free(buff);
	return (str);
}

char	*ft_read(char *buff, int fd)
{
	char	*tmp;
	int		n;

	n = 1;
	tmp = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!tmp)
		return (0);
	tmp[BUFFER_SIZE] = 0;
	while (!ft_strchr(buff, '\n') && n > 0)
	{
		n = read(fd, tmp, BUFFER_SIZE);
		if(n < 0)
		{
			free(tmp);
			return (NULL);
		}
		tmp[n] = '\0';
		buff = ft_strjoin(buff, tmp);
		
	}
	free(tmp);
	return (buff);
}

char	*get_next_line(int fd)
{
	static char	*buff[257];
	char		*line;

	line = NULL;
	if (fd > -1 && fd < 256 && BUFFER_SIZE > 0)
	{

		buff[fd] = ft_read(buff[fd], fd);
		if (buff[fd] && buff[fd][0])
		{
			line = ft_copy(buff[fd]);
			buff[fd] = ft_buff(buff[fd]);
		}
	}
	return (line);
}