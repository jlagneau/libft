/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 08:39:15 by jlagneau          #+#    #+#             */
/*   Updated: 2013/11/24 15:44:09 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	char	*src;
	int		len;

	ft_putstr("ft_strnstr");
	src = (char *) s1;
	len = ft_strlen(s2);
	if (*s2 == '\0' || s2 == NULL)
		return (src);
	while (*src && n--)
	{
		if (ft_memcmp(src, s2, len) != 0)
			return (src);
		src++;
	}
	return (NULL);
}
