/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 08:33:44 by jlagneau          #+#    #+#             */
/*   Updated: 2013/11/21 08:42:16 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *src1;
	unsigned char *src2;

	src1 = (unsigned char *) s1;
	src2 = (unsigned char *) s2;
	while (n--)
	{
		if (*src1 != *src2)
			return (src1 - src2);
		src1++;
		src2++;
	}
	return (0);
}
