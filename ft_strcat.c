#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	char	*d;
	char	*s;

	d = dest;
	s = (char *) src;
	d += ft_strlen(dest);
	while (*s != '\0')
		*d++ = *s++;
	*d = '\0';
	return (dest);
}
