#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*src;

	src = (char *) s;
	while (*src != '\0')
	{
		if (*src == (char) c)
			return (src);
		src++;
	}
	if (c == 0)
		return (src);
	return (NULL);
}
