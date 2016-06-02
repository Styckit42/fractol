#include "fractol.h"

int		ft_check_error(int argc, char **argv)
{
	int bol = FALSE;
	unsigned int	i;

	i = 0;
	if (argc >= 2)
	{
		while (argv[i])
		{
			if ((ft_strcmp(argv[i], "mandelbroot") != 0) && 
				(ft_strcmp(argv[i], "julia") != 0) && 
				(ft_strcmp(argv[i], "burningship") != 0))
				bol = TRUE;
			i++;
		}
	}
	return (bol);
}