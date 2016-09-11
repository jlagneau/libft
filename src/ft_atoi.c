/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 08:35:38 by jlagneau          #+#    #+#             */
/*   Updated: 2016/09/11 17:06:30 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_def.h>
#include <ft_str.h>
#include <ft_math.h>

int				ft_atoi(const char *str)
{
	t_bool		is_negative;
	int			ret;
	int			num_size;
	int			pos;

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
		ret += (str[pos++] - '0') * ft_int_power(10, num_size);
	return ((is_negative == TRUE) ? -ret : ret);
}
