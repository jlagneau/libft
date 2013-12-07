/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 08:33:32 by jlagneau          #+#    #+#             */
/*   Updated: 2013/11/22 17:13:41 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static void		*ft_realloc(void *content, size_t new_size)
{
	void		*tmp;

	if (!content)
	{
		if (!(content = ft_memalloc(new_size)))
			return (NULL);
		return (content);
	}
	if (!(tmp = ft_memalloc(new_size)))
		return (NULL);
	tmp = ft_memcpy(tmp, content, new_size);
	ft_memdel(&content);
	return (tmp);
}