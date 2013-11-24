/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 08:38:02 by jlagneau          #+#    #+#             */
/*   Updated: 2013/11/24 10:13:18 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	char		*d;
	const char	*s;

	ft_putstr("ft_strcat");
	d = s1;
	s = s2;
	d += ft_strlen(d);
	while (*s)
		*d++ = *s++;
	*(d + 1) = '\0';
	return (s1);
}
