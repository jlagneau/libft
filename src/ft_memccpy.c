/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 08:33:58 by jlagneau          #+#    #+#             */
/*   Updated: 2017/04/08 12:12:30 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void					*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	unsigned const char	*s = s2;
	unsigned char		*d;
	size_t				i;

	d = s1;
	i = 0;
	while (n--)
	{
		if (s[i] == (unsigned char)c)
		{
			d[i] = s[i];
			i++;
			return (&d[i]);
		}
		d[i] = s[i];
		i++;
	}
	return (NULL);
}
