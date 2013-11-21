/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 08:38:17 by jlagneau          #+#    #+#             */
/*   Updated: 2013/11/21 08:38:21 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	char	*d;
	char	*s;
	int		len;

	d = dest;
	s = (char *) src;
	len = ft_strlen(s);
	while (len-- && *s != '\0')
		*d++ = *s++;
	while (len--)
		*d++ = '\0';
	return (dest);
}
