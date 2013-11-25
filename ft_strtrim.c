/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 09:40:36 by jlagneau          #+#    #+#             */
/*   Updated: 2013/11/25 15:44:21 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int		ft_isspace(int c)
{
	c = (unsigned char) c;
	if (c == 9 || c == 10 || c == 11 || c == 12 || c == 13 || c == 32)
		return (1);
	return (0);
}

static char		*ft_strip_front_spaces(char *s)
{
	while (ft_isspace(*s))
		s++;
	return (s);
}

static char		*ft_strip_back_spaces(char *s)
{
	size_t		len;

	len = ft_strlen(s) - 1;
	while (ft_isspace(s[len]))
		s[len--] = '\0';
	return (s);
}

char			*ft_strtrim(char const *s)
{
	char	*tmp;

	if (s == 0)
		return (NULL);
	tmp = (char *) s;
	tmp = ft_strip_front_spaces(tmp);
	tmp = ft_strip_back_spaces(tmp);
	return (tmp);
}
