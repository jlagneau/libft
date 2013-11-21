#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	char	*d;
	char	*s;
	int		len;
	int		i;

	d = dest;
	s = (char *) src;
	len = ft_strlen(dest);
	d += len - 1;
	i = n - len - 1;
	while (i--)
		*d++ = *s++;
	*d = '\0';
	return (ft_strlen(dest));
}
