#include "fractol.h"

void		switch_color_burning(mlx_t *mlx, int i)
{
	if (mlx->bonus_burning->color == 0)
		mlx_put_pixel_image(mlx->point_burning->x, mlx->point_burning->y
		 , i * 0x00FF00 / mlx->limit_burning->iter , *mlx, mlx->data_burning);
	else if (mlx->bonus_burning->color == 1)
		mlx_put_pixel_image(mlx->point_burning->x, mlx->point_burning->y
		 , i * 0xFF0000 / mlx->limit_burning->iter , *mlx, mlx->data_burning);
	else if (mlx->bonus_burning->color == 2)
		mlx_put_pixel_image(mlx->point_burning->x, mlx->point_burning->y
		 , i * 0x0000FF / mlx->limit_burning->iter , *mlx, mlx->data_burning);
}

void		switch_color_julia(mlx_t *mlx, int i)
{
	if (mlx->bonus_julia->color == 0)
		mlx_put_pixel_image(mlx->point_julia->x, mlx->point_julia->y
		 , i * 0x00FF00 / mlx->limit_julia->iter , *mlx, mlx->data_julia);
	else if (mlx->bonus_julia->color == 1)
		mlx_put_pixel_image(mlx->point_julia->x, mlx->point_julia->y
		 , i * 0xFF0000 / mlx->limit_julia->iter , *mlx, mlx->data_julia);
	else if (mlx->bonus_julia->color == 2)
		mlx_put_pixel_image(mlx->point_julia->x, mlx->point_julia->y
		 , i * 0x0000FF / mlx->limit_julia->iter , *mlx, mlx->data_julia);
}

void		switch_color_mandel(mlx_t *mlx, int i)
{
	if (mlx->bonus_mandel->color == 0)
		mlx_put_pixel_image(mlx->point_mandel->x, mlx->point_mandel->y
		 , i * 0x00FF00 / mlx->limit_mandel->iter , *mlx, mlx->data_mandel);
	else if (mlx->bonus_mandel->color == 1)
		mlx_put_pixel_image(mlx->point_mandel->x, mlx->point_mandel->y
		 , i * 0xFF0000 / mlx->limit_mandel->iter , *mlx, mlx->data_mandel);
	else if (mlx->bonus_mandel->color == 2)
		mlx_put_pixel_image(mlx->point_mandel->x, mlx->point_mandel->y
		 , i * 0x0000FF / mlx->limit_mandel->iter , *mlx, mlx->data_mandel);
}