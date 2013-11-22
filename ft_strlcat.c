/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 08:31:17 by jlagneau          #+#    #+#             */
/*   Updated: 2013/11/22 10:22:30 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	char	*d;
	char	*s;
	int		len;
	int		i;

	d = dst;
	s = (char *) src;
	len = ft_strlen(dst);
	d += len;
	i = n - len - 1;
	while (i--)
		*d++ = *s++;
	*(d + 1) = '\0';
	return (ft_strlen(dst));
}
