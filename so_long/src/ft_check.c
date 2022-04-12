

#include "so_long.h"

int	ft_count(char **map, char c)
{
	int	i;
	int	x;
	int	y;

	i = 0;
	x = 0;
	while (map && map[x])
	{
		y = 0;
		while (map[x] && *map[x][y])
			i += map[x][y++] == c;
		x++;
	}
	return (i);
}

int	ft_edge(char **map)
{
	int	i;

	i = 0;
	while (map && *map && (*map)[i])
		i++;
	while(*map)
	{
		if (!((*map)[0] == (*map)[i - 1] || (*map)[0] != 1)
			return (0);
		map++;
	}
	map--;
	while (--i >= 0 && *map)
	{
		if ((*map)[i] != 1)
			return (0);
	}
	return (1);
}

int	ft_map_start(t_map *carte)
{
	int	i;

	i = 0;
	while (carte->map && carte->map[i])
	{
		if (carte->map[i + 1] && ft_strlen(carte->map[i]) != ft_strlen(carte->map[i++]))
			return (0);
	}
	if (1 != ft_count(carte->map, 'E') || 1 != ft_count(carte->map, 'P') || 
	1 > (carte->object = (ft_count(carte->map, 'C')))
		return (0);
	if (ft_edge(carte->map))
		return (1);
	return (0);
}
