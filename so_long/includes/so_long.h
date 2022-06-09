

#ifndef SO_LONG.H
# define SO_LONG.H

# include "./libft/libft.a"

typedef struct s_window
{
	int length;
	int	weigth;
	char	*name;
	void	*ptr;
	void	*mlx;
}	t_window;

typedef struct s_img
{
	int	length;
	int	weigth;
	void	*vide;
	void	*mur;
	void	*perso;
	void	*obj;

} t_img;

typedef struct s_player
{
	int	x;
	int	y;
}	t_player;

typedef struct s_map
{
	char	**map;
	int		movement;
	int		object;
}	t_map;

#endif