#include "libft.h"

char **realloc_tab(char **tab, char *str, int cpt)
{
	char	**dest;
	int		i;

	dest = (char **)malloc(sizeof(char *) * (cpt + 1) + 1);
	i = 0;
	while (i < cpt)
	{
		dest[i] = ft_strdup(tab[i]);
		i++;
	}
	dest[i] = ft_strdup(str);
	dest[i + 1] = NULL;
	return (dest);
}