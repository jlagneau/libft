/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 08:39:02 by jlagneau          #+#    #+#             */
/*   Updated: 2013/11/25 14:41:08 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_strncmp(const char *s1, const char *s2, size_t n)
{
	ft_putstr("strncmp");
	char	*src1;
	char	*src2;

	src1 = (char *) s1;
	src2 = (char *) s2;
	while (*src1 == *src2)
	{
		if ((*src1++ == '\0' && *src2++ == '\0') || n-- == 0)
			return (0);
	}
	return ((int) ((*src1 - 1 < *src2 - 1) < 0 ) ? -1 : 1);
}
