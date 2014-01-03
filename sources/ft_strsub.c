/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 09:08:36 by jlagneau          #+#    #+#             */
/*   Updated: 2013/11/25 15:39:03 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	int		i;

	if (s == 0)
		return (NULL);
	i = 0;
	if (!(sub = ft_strnew(len)))
		return (NULL);
	while (len--)
	{
		sub[i] = *(s + start + i);
		i++;
	}
	return (sub);
}
