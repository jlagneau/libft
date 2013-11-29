/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 08:39:02 by jlagneau          #+#    #+#             */
/*   Updated: 2013/11/29 09:49:10 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_strncmp(const char *s1, const char *s2, size_t n)
{
	ft_putstr(" ft_strncmp ");
	if (n > ft_strlen(s1))
		return ((int) ft_memcmp(s1, s2, ft_strlen(s1)));
	if (n > ft_strlen(s2))
		return ((int) ft_memcmp(s1, s2, ft_strlen(s2)));
	return ((int) ft_memcmp(s1, s2, n));
}
