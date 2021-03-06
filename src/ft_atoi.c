/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 08:35:38 by jlagneau          #+#    #+#             */
/*   Updated: 2017/04/08 11:15:38 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static int		power_of_ten(unsigned int exp)
{
	int			result;
	int			base;

	result = 1;
	base = 10;
	while (exp)
	{
		if (exp & 1)
			result *= base;
		exp >>= 1;
		base *= base;
	}
	return (result);
}

int				ft_atoi(const char *str)
{
	t_bool		is_negative;
	int			ret;
	size_t		pos;
	size_t		num_size;

	pos = 0;
	is_negative = FALSE;
	while (ft_isspace(str[pos]))
		pos++;
	if (str[pos] == '-' || str[pos] == '+')
	{
		if (str[pos] == '-')
			is_negative = TRUE;
		pos++;
	}
	num_size = 0;
	while (ft_isdigit(str[pos + num_size]))
		num_size++;
	ret = 0;
	while (num_size-- > 0)
		ret += (str[pos++] - '0') * power_of_ten((unsigned int)num_size);
	return ((is_negative == TRUE) ? -ret : ret);
}
