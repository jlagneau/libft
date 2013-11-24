/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 08:33:58 by jlagneau          #+#    #+#             */
/*   Updated: 2013/11/24 13:27:35 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	char		*d;
	const char	*s;

	d = s1;
	s = s2;
	c = (unsigned char) c;
	while (n--)
	{
		if (*s == c)
			return (d + 1);
		*d++ = *s++;
	}
	return (NULL);
}
