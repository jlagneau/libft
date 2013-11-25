/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 15:19:31 by jlagneau          #+#    #+#             */
/*   Updated: 2013/11/25 15:42:56 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_count_words(char const *s, char c)
{
	while (*s)
	{
		if(*s != c)
		{
		}
	}
	return (0);
}

char			**ft_strsplit(char const *s, char c)
{
	if (s == 0)
		return (NULL);
	char *tmp = (char *) s;
	tmp++;
	c++;
	ft_count_words(tmp, c);
	return (NULL);
}
