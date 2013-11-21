#include "libft.h"

int		ft_isdigit(int c)
{
	c = (unsigned char) c;
	if (c > 47 && c < 58)
		return (1);
	return (0);
}
