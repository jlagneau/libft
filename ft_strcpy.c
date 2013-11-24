/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 08:38:17 by jlagneau          #+#    #+#             */
/*   Updated: 2013/11/24 10:14:56 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strcpy(char *s1, const char *s2)
{
	char	*tmp;
	ft_putstr("ft_strcpy");
	tmp = s1;
	while (*s2)
		*tmp++ = *s2++;
	return (s1);
}
