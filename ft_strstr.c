#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	char	*src;
	int		len;

	src = (char *) haystack;
	len = (int) ft_strlen(needle);
	while (*src)
	{
		if (ft_memcmp(src, needle, len) != 0)
			return (src);
		src++;
	}
	return (NULL);
}
