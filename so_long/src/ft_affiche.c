#include "so_long.h"

void	ft_affiche(t_map *map, t_window *win, t_img *img, t_player *perso)
{
	int	i;
	int	j;

	i = 0;
	while (map.map[i])
	{
		j = 0;
		while (map.map[i][j])
		{
			if (map.map[i][j] == '1')
				mlx_put_image_to_window(win.mlx, win.ptr, img.mur,
				 (win.length/2) + (i - perso.x) * img.length,
				  (win.length/2) + (j - perso.y) * img.length);
			else
			mlx_put_image_to_window(win.mlx, win.ptr, img.vide,
				 (win.length/2) + (i - perso.x) * img.length,
				  (win.length/2) + (j - perso.y) * img.length);
			j++;
		}
	}
}

void	ft_affiche_collec(t_map *map, t_window *win, t_img *img, t_player *perso)
{
	{
	int	i;
	int	j;

	i = 0;
	while (map.map[i])
	{
		j = 0;
		while (map.map[i][j])
		{
			if (map.map[i][j] == 'C')
				mlx_put_image_to_window(win.mlx, win.ptr, img.obj,
				 (win.length/2) + (i - perso.x) * img.length,
				  (win.weigth/2) + (j - perso.y) * img.length);
		}
	}
	mlx_put_image_to_window(win.mlx, win.ptr, img.obj, (win.length/2), 
	(win.weigth/2));
}