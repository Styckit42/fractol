#include "fractol.h"

void		ft_init(char **argv)
{
	mlx_t			*mlx;
	unsigned int	i;

	i = 0;
	mlx = (mlx_t *)malloc(sizeof(mlx_t));
	mlx->mlx_ptr = mlx_init();
	init_struct_limit(mlx);
	init_struct_bonus(mlx);
	init_struct_point(mlx);
	while (argv[i])
	{
		if(ft_strcmp(argv[i], "mandelbrot") == 0)
			ft_mandel_hub(mlx);
		else if(ft_strcmp(argv[i], "julia") == 0)
			ft_julia_hub(mlx);
		else if(ft_strcmp(argv[i], "burning") == 0)
			ft_burning_hub(mlx);
		i++;
	}
	mlx_loop(mlx->mlx_ptr);
}