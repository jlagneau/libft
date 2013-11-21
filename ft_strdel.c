#include "libft.h"

void	ft_strdel(char **as)
{
	free(*as);
	free(as);
	as = NULL;
}
