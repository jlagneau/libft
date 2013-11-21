#include "libft.h"

#include <stdio.h>

static int		ft_exp_ten(int n)
{
	int			i;
	int			ret;

	i = 0;
	ret = 1;
	while (i++ < n)
		ret *= 10;
	return (ret);
}

static int		ft_isspace(int c)
{
	c = (unsigned char) c;
	if (c == 9 || c == 10 || c == 11 || c == 12 || c == 13 || c == 32)
		return (1);
	return (0);
}

static char		*ft_strip_front_spaces(char *s)
{
	while (ft_isspace(*s))
		s++;
	return (s);
}

static int		ft_strip_front_sign(char *s)
{
	if (*s == '-')
		return (-1);
	return (1);
}

int				ft_atoi(const char *nptr)
{
	int			op;
	int			ret;
	int			i;
	char		*s;

	s = (char *) nptr;
	op = 1;
	ret = 0;
	i = 0;
	s = ft_strip_front_spaces(s);
	if (*s == '-' || *s == '+')
	{
		op = ft_strip_front_sign(s);
		s++;
	}
	while (s[i] > 47 && s[i] < 58)
		i++;
	while (i-- > 0)
		ret += ((*(s++) - '0') * ft_exp_ten(i));
	return (ret * op);
}
