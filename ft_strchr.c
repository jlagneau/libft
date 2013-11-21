/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 08:32:18 by jlagneau          #+#    #+#             */
/*   Updated: 2013/11/21 08:32:39 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*src;

	src = (char *) s;
	while (*src != '\0')
	{
		if (*src == (char) c)
			return (src);
		src++;
	}
	if (c == 0)
		return (src);
	return (NULL);
}
