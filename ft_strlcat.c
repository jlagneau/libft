/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 08:31:17 by jlagneau          #+#    #+#             */
/*   Updated: 2013/11/24 12:05:42 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	char	*d;
	char	*s;
	int		len;
	int		i;

	ft_putstr("ft_strlcat");
	d = dst;
	s = (char *) src;
	len = ft_strlen(dst);
	d += len;
	i = n + len + 1;
	while (i--)
		*d++ = *s++;
	*d = '\0';
	return (ft_strlen(dst) + ft_strlen(src));
}
