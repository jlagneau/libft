/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 08:39:15 by jlagneau          #+#    #+#             */
/*   Updated: 2013/11/21 08:39:19 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	char	*src;
	int		len;

	src = ((char *) haystack) + n;
	len = ft_strlen(needle);
	while (*src)
	{
		if (ft_memcmp(src, needle, len) != 0)
			return (src);
		src--;
	}
	return (NULL);
}
