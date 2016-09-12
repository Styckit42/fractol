#include "fractol.h"

static	void	ft_bol_set(bolerr_t *bol)
{
	bol->mand = 0;
	bol->jul = 0;
	bol->bur = 0;
	bol->other = 0;
	bol->ret = 0;
}

int				ft_check_error(int argc, char **argv)
{
	bolerr_t		*bol;
	unsigned int	i;

	i = 0;
	bol = (bolerr_t *)malloc(sizeof(bolerr_t));
	ft_bol_set(bol);
	if (argc >= 2)
	{
		while (argv[i])
		{
			ft_check_bol(argv[i], bol);
			if (bol->ret == 1)
			{
				free(bol);
				return (FALSE);
			}
			i++;
		}
	}
	free(bol);
	return (TRUE);
}