

#ifndef SO_LONG.H
# define SO_LONG.H

# include "./libft/libft.a"

typedef struct s_player
{
	int	x;
	int	y;
}	t_player

typedef struct s_map
{
	char	**s_map;
	int		movement;
	int		object;
}	t_map

#endif