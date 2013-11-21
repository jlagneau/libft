#include "libft.h"

int		ft_isascii(int c)
{
	c = (unsigned char) c;
	if (c >= 0 && c < 128)
		return (1);
	return (0);
}
