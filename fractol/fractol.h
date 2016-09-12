#ifndef FRACTOL_H
# define FRACTOL_H
# define FALSE 0
# define TRUE 1
# define HEIGHT 600
# define WIDTH 800
# define ESCAPE 65307
# define PLUS 61
# define MOINS 45
# define UP 65362
# define DOWN 65364
# define LEFT 65361
# define RIGHT 65363
# define L_CLIC 1
# define R_CLIC 3
# define SCROLL_UP 4
# define SCROLL_DOWN 5
# define ZOOM 122
# define C 99
# define G 103
# define L 108
# define H 104
# define ECHAP 65307

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include "libft/libft.h"
# include <time.h>
# include <mlx.h>

typedef struct		zoom_s
{
	double			cx;
	double			cy;
	double			hx;
	double			hy;
}					zoom_t; 

typedef	struct 		limit_s
{
	double			xmin;
	double			xmax;
	double			ymin;
	double			ymax;
	double			coeffx;
	double			coeffy;
	int				iter;
}					limit_t;

typedef struct		bonus_s
{
	int				color;
	int				bol_g;
	int				locked;
	int				help;
	void			*win_help;
}					bonus_t;

typedef struct		point_s 
{
	double			cr;
	double			ci;
	double			zr;
	double			zi;
	double			x;
	double			y;
}					point_t;

typedef struct		mlx_s
{
	int				bpp;
	int				endian;
	int				sizeline;
	void			*mlx_ptr;
	void			*win_mandel;
	void			*win_julia;
	void			*win_burning;
	void			*img_mandel;
	void			*img_julia;
	void			*img_burning;
	char			*data_mandel;
	char			*data_julia;
	char			*data_burning;
	bonus_t			*bonus_burning;
	bonus_t			*bonus_julia;
	bonus_t			*bonus_mandel;
	limit_t			*limit_burning;
	limit_t			*limit_julia;
	limit_t			*limit_mandel;
	point_t			*point_burning;
	point_t			*point_julia;
	point_t			*point_mandel;
	zoom_t			*zoom_burning;
	zoom_t			*zoom_julia;
	zoom_t			*zoom_mandel;
}					mlx_t;

typedef struct		bolerr_s
{
	int				mand;
	int				jul;
	int				bur;
	int				other;
	int				ret;
}					bolerr_t;

void		burning_while_calc(mlx_t *mlx);
void		close_prog(mlx_t *mlx);
int			expose_burning(mlx_t *mlx);
int			expose_julia(mlx_t *mlx);
int			expose_mandel(mlx_t *mlx);
void		ft_arg_error(void);
void		ft_burning_hub(mlx_t *mlx);
void		ft_check_bol(char *str, bolerr_t *bol);
int			ft_check_error(int argc, char **argv);
void		ft_init(char **argv);
void		ft_julia_hub(mlx_t *mlx);
void		ft_mandel_hub(mlx_t *mlx);
void		give_c_burning_value(mlx_t *mlx);
void		give_c_julia_value(mlx_t *mlx);
void		give_c_mandel_value(mlx_t *mlx);
void		grille_burning(mlx_t *mlx);
void		grille_julia(mlx_t *mlx);
void		grille_mandel(mlx_t *mlx);
void		helper_burning(mlx_t *mlx);
void		helper_julia(mlx_t *mlx);
void		helper_mandel(mlx_t *mlx);
void		init_struct_bonus(mlx_t *mlx);
void		init_struct_limit(mlx_t *mlx);
void		init_struct_point(mlx_t *mlx);
void		init_struct_zoom(mlx_t *mlx, int x, int y);
void		julia_while_calc(mlx_t *mlx);
int			key_burning(int keycode, mlx_t *mlx);
int			key_burning_help(int keycode, mlx_t *mlx);
int			key_julia(int keycode, mlx_t *mlx);
int			key_julia_help(int keycode, mlx_t *mlx);
int			key_mandel(int keycode, mlx_t *mlx);
int			key_mandel_help(int keycode, mlx_t *mlx);
void		left_click_burning(mlx_t *mlx, int x, int y);
void		left_click_julia(mlx_t *mlx, int x, int y);
void		left_click_mandel(mlx_t *mlx, int x, int y);
void		mandel_while_calc(mlx_t *mlx);
void		mlx_put_pixel_image(int x, int y, unsigned long img_color, mlx_t mlx, char *data);
int			motion_julia(int x, int y, mlx_t *mlx);
int			mouse_burning(int button, int x, int y, mlx_t *mlx);
int			mouse_julia(int button, int x, int y, mlx_t *mlx);
int			mouse_mandel(int button, int x, int y, mlx_t *mlx);
void		mouv_down_burning(mlx_t *mlx);
void		mouv_left_burning(mlx_t *mlx);
void		mouv_right_burning(mlx_t *mlx);
void		mouv_up_burning(mlx_t *mlx);
void		mouv_down_julia(mlx_t *mlx);
void		mouv_left_julia(mlx_t *mlx);
void		mouv_right_julia(mlx_t *mlx);
void		mouv_up_julia(mlx_t *mlx);
void		mouv_down_mandel(mlx_t *mlx);
void		mouv_left_mandel(mlx_t *mlx);
void		mouv_right_mandel(mlx_t *mlx);
void		mouv_up_mandel(mlx_t *mlx);
void		right_click_burning(mlx_t *mlx, int x, int y);
void		right_click_julia(mlx_t *mlx, int x, int y);
void		right_click_mandel(mlx_t *mlx, int x, int y);
void		reinit_julia(mlx_t *mlx);
void		reinit_mandel(mlx_t *mlx);
void		reinit_burning(mlx_t *mlx);
void		switch_color_burning(mlx_t *mlx, int i);
void		switch_color_value_burning(mlx_t *mlx);
void		switch_color_julia(mlx_t *mlx, int i);
void		switch_color_value_julia(mlx_t *mlx);
void		switch_color_mandel(mlx_t *mlx, int i);
void		switch_color_value_mandel(mlx_t *mlx);

#endif