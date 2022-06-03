
#include "so_long.h"

void	ft_move(t_map *map, t_player *perso, int x, int y)
{
	if (map->s_map[perso->y + x][perso->x + x] == '0')
		ft_move_to(map, perso, x, y);
	else if (map->s_map[perso->y + x][perso->x + x] == 'C')
		ft_move_to(map, perso, x, y);
}

void	ft_move_to(t_map *map, t_player *perso, int x, int y)
{
	map->s_map[perso->y + x][perso->x + x] = P;
	map->s_map[perso->y][perso->x] = '0';
	perso->y = perso->y + y;
	perso->x = perso->x + x;
	map->movement++;
	if (map->s_map[perso->y + x][perso->x + x] == 'C')
		map->object++;
}