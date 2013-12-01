/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 08:31:17 by jlagneau          #+#    #+#             */
/*   Updated: 2013/12/01 16:03:46 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char *d;
	char *s;
	size_t n;
	size_t len_dst;

	n = size;
	d = dst;
	s = (char *) src;
	while (n-- != 0 && *d != '\0')
		d++;
	len_dst = d - dst;
	n = size - len_dst;
	if (n == 0)
		return (len_dst + ft_strlen(s));
	while (*s != '\0') {
		if (n != 1) {
			*d++ = *s;
			n--;
		}
		s++;
	}
	*d = '\0';
	return (len_dst + (s - src));
}
