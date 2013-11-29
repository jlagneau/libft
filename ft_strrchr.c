/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 08:30:35 by jlagneau          #+#    #+#             */
/*   Updated: 2013/11/29 09:50:43 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	ft_putstr(" ft_strrchr ");
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
