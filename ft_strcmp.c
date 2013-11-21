#include "libft.h"

int     ft_strcmp(const char *s1, const char *s2)
{
	char	*src1;
	char	*src2;

	src1 = (char *) s1;
	src2 = (char *) s2;
	while (*src1 == *src2)
	{
		if (*src1++ == '\0' && *src2++ == '\0')
			return (0);
	}
	return ((int)(*src1 - 1 < *src2 - 1) ? -1 : 1 );
}
