/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 08:30:53 by jlagneau          #+#    #+#             */
/*   Updated: 2013/11/22 13:52:44 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strncpy(char *s1, const char *s2, size_t n)
{
	char		*d;
	const char	*s;

	d = s1;
	s = s2;
	while (n-- && *s != '\0')
		*d++ = *s++;
	return (s1);
}
