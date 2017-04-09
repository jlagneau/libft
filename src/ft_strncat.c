/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 08:31:08 by jlagneau          #+#    #+#             */
/*   Updated: 2017/04/08 13:23:49 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char		*ft_strncat(char *s1, const char *s2, size_t n)
{
	char	*d;
	size_t	i;

	i = 0;
	d = s1;
	d += ft_strlen(d);
	while (n-- && s2[i])
	{
		d[i] = s2[i];
		i++;
	}
	d[i] = '\0';
	return (s1);
}
