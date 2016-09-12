#include "fractol.h"

void    mlx_put_pixel_image(int x, int y, unsigned long img_color, mlx_t mlx, char *data)
{
    unsigned int		color; // passer de la couleur noté en hexadecimal en RGB (0 a 255)
    char				*ptr;
    int					i; // i = pixel a tester

    i = y * mlx.sizeline + x * mlx.bpp / 8;
    color = mlx_get_color_value(mlx.mlx_ptr, img_color); //renvoie la valeur de la premiere couleur et creer en adresse juste apres les valeurs des autres couleurs pour pouvoir les recup apres dans le data
    ptr = (char *)&color;
    data[i] = ptr[0]; // Je me le rouge
    data[i + 1] = ptr[1]; // le vert 
    data[i + 2] = ptr[2]; // et le bleu 
}
