/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 15:19:31 by jlagneau          #+#    #+#             */
/*   Updated: 2013/11/27 18:18:47 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

static char		*ft_strctrim(char const *s, char c)
{
	char	*src;
	char	*tmp;
	char	*ret;
	size_t	len;

	src = ft_strdup(s);
	tmp = src;
	while (*tmp == c)
		tmp++;
	len = ft_strlen(tmp) - 1;
	while (tmp[len] == c)
		tmp[len--] = '\0';
	ret = ft_strdup(tmp);
	ft_strdel(&src);
	return (ret);
}

static size_t	ft_strclen(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0' && s[len] != c)
		len++;
	return (len);
}

static int		ft_count_words(char const *s, char c)
{
	char const	*src;
	int			i;

	i = 0;
	src = s;
	while (*src)
	{
		if(*src == c)
		{
			while (*src == c && *src != '\0')
				src++;
		}
		else
		{
			while (*src != c && *src != '\0')
				src++;
			i++;
		}
	}
	return (i);
}

static char		*ft_strcdup(char const *s, char c)
{
	char	*ret;
	char	*tmp;
	size_t	len;

	len = 0;
	tmp = ft_strdup(s);
	while (tmp[len] != '\0' && tmp[len] != c)
		len++;
	ret = ft_strnew(len);
	ret = ft_memmove(ret, tmp, len);
	ft_strdel(&tmp);
	return (ret);
}

char			**ft_strsplit(char const *s, char c)
{
	char	*src_clean;
	char	*p;
	char	**ret;
	int		words;
	int		i;

	if (s == NULL)
		return (NULL);
	i = 0;
	src_clean = ft_strctrim(s, c);
	p = src_clean;
	words = ft_count_words(src_clean, c);
	ret = (char **) ft_memalloc(words + 1);
	while (i < words)
	{
		ret[i] = ft_strcdup(src_clean, c);
		if (i + 1 != words)
		{
			src_clean = src_clean + ft_strclen(src_clean, c);
			src_clean = ft_strctrim(src_clean, c);
		}
		i++;
	}
	ret[words] = NULL;
	ft_strdel(&p);
	return (ret);
}
