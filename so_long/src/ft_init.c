#include "so_long.h"

t_window	*ft_init_win(int len, int wei, char *name, void *mlx)
{
	t_window	win;

	win = malloc(sizeof(t_window) * 1);
	if (!win)
		return (NULL);
	win.ptr = mlx_new_window(mlx, len, wei, str);
	win.mlx = mlx;
	win.weigth = wei;
	win.length = len;
	win.name = str;
	return (win);
}