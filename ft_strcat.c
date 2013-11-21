/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 08:38:02 by jlagneau          #+#    #+#             */
/*   Updated: 2013/11/21 08:38:06 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	char	*d;
	char	*s;

	d = dest;
	s = (char *) src;
	d += ft_strlen(dest);
	while (*s != '\0')
		*d++ = *s++;
	*d = '\0';
	return (dest);
}
