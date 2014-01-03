/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrealloc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/02 08:36:28 by jlagneau          #+#    #+#             */
/*   Updated: 2013/12/08 21:31:11 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char			*ft_strrealloc(char *s, size_t new_size)
{
	char		*tmp;
	int			old_size;

	if (!s)
	{
		if (!(s = ft_strnew(new_size)))
			return (NULL);
		return (s);
	}
	old_size = ft_strlen(s);
	if (!(tmp = ft_strnew(new_size)))
		return (NULL);
	tmp = (char *)ft_strncpy(tmp, s, old_size);
	ft_strdel(&s);
	return (tmp);
}
