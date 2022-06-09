#include "get_next_line.h"

int	ft_strlen(char	*s)
{
	int	i;

	i = 0;
	while (s && s[i])
		i++;
	return (i);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	str = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if (s1)
		while (s1 && s1[j])
			str[i++] = s1[j++];
	j = 0;
	while (s2 && s2[j])
		str[i++] = s2[j++];
	str[i] = 0;
	free(s1);
	return (str);
}

char	*ft_strchr(char *str, int c)
{
	if (!str)
		return (NULL);
	while ((unsigned char)*str && (unsigned char)*str != (unsigned char)c)
		str++;
	if ((unsigned char)*str != (unsigned char)c)
		return (NULL);
	return (str);
}

char	*ft_strcpy(char *s1, char *str)
{
	int	i;

	i = 0;
	if (!s1)
		return (NULL);
	while (s1 && s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = 0;
	return (str);
}

char	*ft_copy(char *s1)
{
	char	*str;
	int		i;

	i = 0;
	if (!s1)
		return (NULL);
	while (s1 && s1[i] && s1[i] != '\n')
		i++;
	if (s1[i] == '\n')
		i++;
	str = malloc(sizeof(char) * (1 + i));
	if (!str)
		return (NULL);
	str[i] = '\0';
	i = 0;
	while (s1 && s1[i] && s1[i] != '\n')
	{
		str[i] = s1[i];
		i++;
	}
	if (s1[i] == '\n')
		str[i] = '\n';
	return (str);
}