#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*tmp;

	tmp = NULL;
	tmp = malloc(size);
	if (tmp == NULL)
		return (NULL);
	ft_bzero(tmp, size);
	return (tmp);
}
