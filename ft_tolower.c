#include "libft.h"

int		toupper(int c)
{
	if (c > 64 && c < 91)
		return (c + 32);
	return (c);
}
