/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ltoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/19 10:53:21 by jlagneau          #+#    #+#             */
/*   Updated: 2017/04/19 10:54:10 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char				*ft_ltoa(long n)
{
	const t_bool	is_negative = (n < 0) ? TRUE : FALSE;
	char			tmp[255];
	char			rem;
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
