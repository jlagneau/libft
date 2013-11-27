/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 08:30:35 by jlagneau          #+#    #+#             */
/*   Updated: 2013/11/24 10:17:38 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*src;

	src = (char *) s + ft_strlen(s);
	while (*src != (char) c)
	{
		if (src == s)
			return (NULL);
		src--;
	}
	return (src);
}
