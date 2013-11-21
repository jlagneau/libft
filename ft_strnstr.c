#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	char	*src;
	int		len;

	src = ((char *) haystack) + n;
	len = ft_strlen(needle);
	while (*src)
	{
		if (ft_memcmp(src, needle, len) != 0)
			return (src);
		src--;
	}
	return (NULL);
}
