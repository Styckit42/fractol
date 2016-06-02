#include "fractol.h"

void		ft_mandel_hub(mlx_t	*mlx)
{
	mlx->win_mandel = mlx_new_window(mlx->mlx_ptr, 400, 400, "mandel");
}