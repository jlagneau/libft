/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 08:39:35 by jlagneau          #+#    #+#             */
/*   Updated: 2013/11/24 16:51:03 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	char	*src;
	int		len;

	if (!*s1 && !*s2)
		return ((char *) s1);
	src = (char *) s1;
	len = ft_strlen(s2);
	while (*src)
	{
		if (ft_memcmp(src++, s2, len) == 0)
			return (src - 1);
	}
	return (NULL);
}
