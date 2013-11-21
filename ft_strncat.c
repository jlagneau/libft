/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 08:31:08 by jlagneau          #+#    #+#             */
/*   Updated: 2013/11/21 08:31:14 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	char	*d;
	char	*s;

	d = dest;
	s = (char *) src;
	d += ft_strlen(dest);
	while (n-- && *s != '\0')
		*d++ = *s++;
	while (n--)
		*d++ = '\0';
	return (dest);
}
