/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 08:37:10 by jlagneau          #+#    #+#             */
/*   Updated: 2017/04/08 12:19:38 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void					*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned const char	*s = src;
	unsigned char		*d;
	size_t				i;

	i = 0;
	d = dest;
	while (n--)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
