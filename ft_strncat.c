#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	char	*d;
	char	*s;

	d = dest;
	s = (char *) src;
	d += ft_strlen(dest);
	while (n-- && *s != '\0')
		*d++ = *s++;
	while (n--)
		*d++ = '\0';
	return (dest);
}
