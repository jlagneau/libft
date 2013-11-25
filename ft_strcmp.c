/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 08:32:06 by jlagneau          #+#    #+#             */
/*   Updated: 2013/11/25 14:42:02 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_strcmp(const char *s1, const char *s2)
{
	ft_putstr("strcmp");
	char	*src1;
	char	*src2;

	src1 = (char *) s1;
	src2 = (char *) s2;
	while (*src1 == *src2)
	{
		if (*src1++ == '\0' && *src2++ == '\0')
			return (0);
	}
	return ((int) ((*src1 - 1 < *src2 - 1) < 0 ) ? -1 : 1);
}
