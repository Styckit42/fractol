#include "fractol.h"

void		ft_init(char **argv)
{
	mlx_t			*mlx_start;
	unsigned int	i;

	i = 0;
	mlx_start = (mlx_t *)malloc(sizeof(mlx_t));
	mlx_start->mlx_ptr = mlx_init();
	while (argv[i])
	{
		if(ft_strcmp(argv[i], "mandelbroot") == 0)
			ft_mandel_hub(mlx_start);
		else if(ft_strcmp(argv[i], "julia") == 0)
			ft_julia_hub(mlx_start);
		else if(ft_strcmp(argv[i], "burningship") == 0)
			ft_burning_hub(mlx_start);
		//else if(ft_strcmp(argv[i], "other") == 0)
			// ft_other_hub(mlx_start);

		i++;
	}
	mlx_loop(mlx_start->mlx_ptr);
}