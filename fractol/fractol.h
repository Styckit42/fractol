#ifndef FRACTOL_H
# define FRACTOL_H
# define FALSE 0
# define TRUE 1


# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include "libft/libft.h"
# include <mlx.h>

typedef struct		mlx_s
{
	void			*mlx_ptr;
	void			*win_mandel;
	void			*win_julia;
	void			*win_burning;
}					mlx_t;

typedef struct		point_s 
{
	double			cr;
	double			ci;
	double			xr;
	double			xi;
}					point_t;

void		ft_arg_error(void);
void		ft_burning_hub(mlx_t *mlx);
int			ft_check_error(int argc, char **argv);
void		ft_init(char **argv);
void		ft_julia_hub(mlx_t *mlx);
void		ft_mandel_hub(mlx_t *mlx);

#endif