/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 08:31:17 by jlagneau          #+#    #+#             */
/*   Updated: 2017/04/08 13:19:00 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_str.h>

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	n;
	size_t	len_dst;
	size_t	i;
	size_t	j;

	n = size;
	i = 0;
	while (n-- != 0 && dst[i])
		i++;
	len_dst = (size_t)(&dst[i] - dst);
	if ((n = size - len_dst) == 0)
		return (len_dst + ft_strlen(src));
	j = 0;
	while (src[j])
	{
		if (n != 1)
		{
			dst[i] = src[j];
			n--;
		}
		i++;
		j++;
	}
	dst[i] = '\0';
	return (len_dst + (size_t)(&src[i] - src));
}
