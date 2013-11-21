#include "libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	char	*d;
	char	*s;
	int		len;

	d = dest;
	s = (char *) src;
	len = ft_strlen(s);
	while (len-- && *s != '\0')
		*d++ = *s++;
	while (len--)
		*d++ = '\0';
	return (dest);
}
