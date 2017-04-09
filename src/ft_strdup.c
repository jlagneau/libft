/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 08:38:24 by jlagneau          #+#    #+#             */
/*   Updated: 2017/04/08 13:02:15 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char		*ft_strdup(const char *s)
{
	char	*dest;
	size_t	len;

	dest = 0;
	len = ft_strlen(s);
	if (!(dest = ft_strnew(len)))
		return (NULL);
	ft_memcpy(dest, s, len + 1);
	return (dest);
}
