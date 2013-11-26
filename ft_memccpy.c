/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 08:33:58 by jlagneau          #+#    #+#             */
/*   Updated: 2013/11/26 19:14:21 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
    unsigned char			*d;
	const unsigned char		*s;

	d = s1;
	s = s2;
	while (n--)
	{
		if (*s == (unsigned char) c)
		{
			*d++ = *s++;
			return (d);
		}
		*d++ = *s++;
	}
	return (NULL);
}
