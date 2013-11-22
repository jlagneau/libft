/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 09:40:36 by jlagneau          #+#    #+#             */
/*   Updated: 2013/11/22 13:53:23 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

char			*ft_strtrim(char const *s)
{
	char	*tmp;
	char	*ret;
	int		len;

	tmp = (char *) s;
	tmp = ft_strip_front_spaces(tmp);
	len = ft_strlen(tmp);
	while (ft_isspace(tmp[len - 1]))
		len--;
	ret = (char *) malloc(len * sizeof(char));
	ret = ft_strncpy(ret, tmp, len);
	return (ret);
}
