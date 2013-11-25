/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 08:31:17 by jlagneau          #+#    #+#             */
/*   Updated: 2013/11/25 14:40:30 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	ft_putstr("strlcat");
	size_t		len_dst;
	size_t		len_src;
	char		*tmp;

	tmp = dst;
	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	n -= len_dst;
	if (n <= 0)
		return (len_dst + len_src);
	tmp += len_dst;
	ft_memcpy(tmp, src, n);
	return (len_dst + len_src);
}
