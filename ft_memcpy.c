/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 08:37:10 by jlagneau          #+#    #+#             */
/*   Updated: 2013/11/24 10:12:10 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
    char *d;
	const char *s;

	ft_putstr("ft_memcpy");
	d = dest;
	s = src;
	while (n--)
		*d++ = *s++;
	return (dest);
}
