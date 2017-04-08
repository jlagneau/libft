/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 08:36:55 by jlagneau          #+#    #+#             */
/*   Updated: 2017/04/08 12:11:59 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void					*ft_memchr(const void *s, int c, size_t n)
{
	unsigned const char	*src = s;
	size_t				i;

	i = 0;
	while (n--)
	{
		if ((unsigned char)c == src[i])
			return ((void *)&src[i]);
		i++;
	}
	return (NULL);
}
