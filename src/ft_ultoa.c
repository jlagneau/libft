/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/19 10:54:30 by jlagneau          #+#    #+#             */
/*   Updated: 2017/04/19 10:55:19 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char				*ft_ultoa(unsigned long n)
{
	char			tmp[255];
	char			rem;
	int				i;

	i = 0;
	if (n == 0)
		return (ft_strdup("0"));
	while (n != 0)
	{
		rem = n % 10;
		n /= 10;
		tmp[i++] = rem + '0';
	}
	tmp[i] = '\0';
	return (ft_strdup(ft_strrev(tmp)));
}
