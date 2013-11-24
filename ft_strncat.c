/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 08:31:08 by jlagneau          #+#    #+#             */
/*   Updated: 2013/11/24 10:16:09 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char		*d;
	const char	*s;

	ft_putstr("ft_strncat");
	d = s1;
	s = s2;
	d += ft_strlen(s1);
	while (n-- && *s)
		*d++ = *s++;
	*(d + 1) = '\0';
	return (s1);
}
