/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 08:33:19 by jlagneau          #+#    #+#             */
/*   Updated: 2013/11/24 10:12:55 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char *tmp;

	ft_putstr("ft_memset");
	tmp = s;
	while (n--)
		*tmp++ = (unsigned char) c;
	return (s);
}
