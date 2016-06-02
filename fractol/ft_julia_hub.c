#include "fractol.h"

void		ft_julia_hub(mlx_t *mlx)
{
	mlx->win_burning = mlx_new_window(mlx->mlx_ptr, 400, 400, "julia");
}