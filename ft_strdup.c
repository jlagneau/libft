/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 08:38:24 by jlagneau          #+#    #+#             */
/*   Updated: 2013/11/26 13:54:29 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dest;
	size_t	len;

	dest = NULL;
	len = ft_strlen(s);
	dest = ft_strnew(len);
	if (dest == NULL)
		return (NULL);
	ft_memcpy(dest, s, len + 1);
	return (dest);
}
