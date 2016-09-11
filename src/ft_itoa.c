/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 08:34:28 by jlagneau          #+#    #+#             */
/*   Updated: 2016/09/11 17:00:56 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_def.h>
#include <ft_str.h>

char		*ft_itoa(int n)
{
	const t_bool	is_negative = (n < 0) ? TRUE : FALSE;
	char			tmp[255];
	int				rem;
	int				i;

	i = 0;
	if (n == 0)
		return (ft_strdup("0"));
	while (n != 0)
	{
		rem = (is_negative == TRUE) ? (n % 10) * -1 : n % 10;
		n /= 10;
		tmp[i++] = rem + '0';
	}
	if (is_negative == TRUE)
		tmp[i++] = '-';
	tmp[i] = '\0';
	return (ft_strdup(ft_strrev(tmp)));
}
