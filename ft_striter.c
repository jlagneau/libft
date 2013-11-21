#include "libft.h"

void	ft_striter(char *s, void (*f)(unsigned int, char *))
{
	int		i;

	i = 0;
	while (s[i])
		f(i, s++);
}
