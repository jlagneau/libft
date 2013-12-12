/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 08:39:15 by jlagneau          #+#    #+#             */
/*   Updated: 2013/12/02 17:40:57 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	char	*src;
	size_t	len;

	src = (char *)s1;
	len = ft_strlen(s2);
	if (*s2 == '\0')
		return (src);
	while (*src && (int)(n-- - len) >= 0)
	{
		if (ft_strncmp(src++, s2, len) == 0)
			return (src -1);
	}
	return (NULL);
}