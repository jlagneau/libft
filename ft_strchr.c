/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 08:32:18 by jlagneau          #+#    #+#             */
/*   Updated: 2013/11/24 10:13:37 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	ft_putstr("ft_strchr");
	while (*s != (char) c)
	{
		if (*s++ == '\0')
			return (NULL);
	}
	return ((char *) s);
}
