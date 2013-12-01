/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 08:39:02 by jlagneau          #+#    #+#             */
/*   Updated: 2013/12/01 16:32:07 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*src1;
	unsigned char	*src2;

	src1 = (unsigned char *) s1;
	src2 = (unsigned char *) s2;
	while (n--)
	{
		if (*src1 != *src2)
			return (*src1 - *src2);
		if (!*src1)
			break;
		src1++;
		src2++;
	}
	return (0);
}
