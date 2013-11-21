#include "libft.h"

static int	ft_nbrlen(int const n)
{
	int	i;
	int nb;

	i = 0;
	nb = n;
	if (n == 0)
		return (1);
	while (nb != 0)
	{
		nb /= 10;
		i++;
	}
	return ((n < 0) ? i + 1 : i );
}

char		*ft_itoa(int n)
{
	int		nvalue;
	int		nbrlen;
	char	*tmp;

	nvalue = n;
	nbrlen = ft_nbrlen(n);
	tmp = NULL;
	tmp = (char *) malloc ((nbrlen + 1) * sizeof (char));
	if (tmp == NULL)
	{
		ft_putstr_fd("Out of memory\n", 2);
		exit(1);
	}
	tmp[nbrlen] = '\0';
	while (nbrlen != 0)
	{
		tmp[nbrlen - 1] = (n < 0) ? (n % 10) * -1 + 48 : (n % 10) + 48;
		n = (n < 0) ? (n / -10) * -1 : n / 10;
		nbrlen--;
	}
	if (nvalue < 0)
		tmp[0] = '-';
	return (tmp);
}
