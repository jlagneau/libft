#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char		*d;
	const char	*s;

	d = dest;
	s = src;
	while (n--)
	{
		if (*s == c)
		{
			return (d + 1);
		}
		*d++ = *s++;
	}
	return (NULL);
}
