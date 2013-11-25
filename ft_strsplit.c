/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 15:19:31 by jlagneau          #+#    #+#             */
/*   Updated: 2013/11/24 14:44:17 by jlagneau         ###   ########.fr       */
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
	char *tmp = (char *) s;
	tmp++;
	c++;
	ft_count_words(tmp, c);
	return (NULL);
}
