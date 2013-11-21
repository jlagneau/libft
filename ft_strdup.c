/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 08:38:24 by jlagneau          #+#    #+#             */
/*   Updated: 2013/11/21 08:38:28 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dest;
	char	*src;
	char	*tmp;
	int		len;

	dest = NULL;
	src = (char *) s;
	tmp = dest;
	len = ft_strlen(s);
	dest = (char *) malloc(sizeof (char) * len + 1);
	if (dest == NULL)
	{
		errno = ENOMEM;
		return (NULL);
	}
	tmp[len--] = '\0';
	while (len--)
		*tmp++ = *src++;
	return (dest);
}
