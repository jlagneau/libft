/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 08:30:53 by jlagneau          #+#    #+#             */
/*   Updated: 2013/11/29 09:49:39 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *s1, const char *s2, size_t n)
{
	ft_putstr(" ft_strncpy ");
	ft_bzero(s1, n);
	ft_memcpy(s1, s2, n);
	return (s1);
}
