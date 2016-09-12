#include "libft.h"

char		**ft_cpy_tab(char **tab)
{
	unsigned int i;
	char		 **dest;

	i = 0;
	dest = (char**)malloc(sizeof(char*) * ft_len_tab(tab) + 1);
	while (tab[i])
	{
		dest[i] = ft_strdup(tab[i]);
		i++;
	}
	dest[i] = NULL;
	return (dest);
}