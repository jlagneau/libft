/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 08:38:24 by jlagneau          #+#    #+#             */
/*   Updated: 2013/11/22 09:36:05 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dest;
	int		len;

	dest = NULL;
	len = ft_strlen(s) + 1;
	dest = (char *) malloc(sizeof (char) * len);
	if (dest == NULL)
	{
		errno = ENOMEM;
		return (NULL);
	}
	ft_memcpy(dest, s, len);
	return (dest);
}
