/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 08:37:17 by jlagneau          #+#    #+#             */
/*   Updated: 2017/04/08 12:19:52 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void		*ft_memmove(void *s1, const void *s2, size_t n)
{
	char	*tmp;

	if (!(tmp = ft_memalloc(n)))
		return (NULL);
	ft_memcpy(tmp, s2, n);
	ft_memcpy(s1, tmp, n);
	ft_memdel((void**)&tmp);
	return (s1);
}
