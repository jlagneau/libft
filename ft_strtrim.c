/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 09:40:36 by jlagneau          #+#    #+#             */
/*   Updated: 2013/11/26 16:02:44 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	char	*cpy;
	char	*ret;

	if (!s)
		return (NULL);
	cpy = ft_strdup(s);
	tmp = cpy;
	tmp = ft_strip_front_spaces(tmp);
	tmp = ft_strip_back_spaces(tmp);
	ret = ft_strdup(tmp);
	ft_strclr(tmp);
	ft_strdel(&cpy);
	return (ret);
}
