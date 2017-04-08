/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 08:30:35 by jlagneau          #+#    #+#             */
/*   Updated: 2017/04/08 13:53:27 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char		*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	while (s[i] != (unsigned char)c)
	{
		if (&s[i] == s)
			return (NULL);
		i--;
	}
	return ((char*)&s[i]);
}
