#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*src;

	src = (char *) s + ft_strlen(s) + 1;
	while (src != s)
	{
		if (*src == (char) c)
			return (src);
		src--;
	}
	return (NULL);
}
