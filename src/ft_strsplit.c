/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 15:19:31 by jlagneau          #+#    #+#             */
/*   Updated: 2017/04/08 13:38:59 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

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

static size_t	ft_count_words(char const *s, char c)
{
	char const	*src;
	size_t		i;

	i = 0;
	src = s;
	while (*src)
	{
		if (*src == c)
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

char			**ft_strsplit(char const *s, char c)
{
	char	*src_clean;
	char	*p;
	char	**ret;
	size_t	words;
	size_t	i;

	i = 0;
	src_clean = ft_strctrim(s, c);
	p = src_clean;
	words = ft_count_words(src_clean, c);
	if (!(ret = (char **)ft_memalloc(sizeof(char *) * words + 1)))
		return (NULL);
	while (i < words)
	{
		while (*src_clean && *src_clean == c)
			src_clean++;
		ret[i] = ft_strsub(src_clean, 0, ft_strclen(src_clean, c));
		src_clean = src_clean + ft_strclen(src_clean, c);
		i++;
	}
	ret[words] = 0;
	ft_strdel(&p);
	return (ret);
}
