#include "libft.h"

static int	ft_ws(char c, char set)
{
	if (c == set)
		return(1);
	return (0);
}

static int	ft_word(char *str, char set)
{
	int up;
	int mot;

	up = 1;
	mot = 0;
	while (*str && str)
	{
		if (ft_ws(*str, set))
			up = 1;
		else if (up == 1)
		{
			mot++;
			up = 0;
		}
		str++;
	}
	return (mot);
}

static int ft_strlen_split(char *str, char set)
{
	int i;

	i = 0;
	while (*str && str && ft_ws(*str, set))
		str++;
	while (str[i] && !ft_ws(str[i], set))
		i++;
	return (i + 1);
}

static char	*ft_strcopy_split(char *str, char *sdef, char set)
{
	while (*str && str && ft_ws(*str, set))
		str++;
	while (str && *str && !ft_ws(*str, set))
	{
		*sdef = *str;
		str++;
		sdef++;
	}
	*sdef = 0;
	return (str);
}

char	**ft_split(char *str)
{
	int	 i;
	char	**sdef;
	int	 word;

	i = 0;
	word = ft_word(str, set);
	sdef = malloc(sizeof(char*) * (word + 1));
	if (!sdef)
		return (NULL);
	sdef[word] = NULL;
	while (i < word)
	{
		sdef[i] = malloc(ft_strlen_split(str, set) + 1);
		if (sdef[i] == NULL)
			return (NULL);
		str = ft_strcopy_split(str, sdef[i], set);
		i++;
	}
	return (sdef);
}