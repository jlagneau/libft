/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 08:36:28 by jlagneau          #+#    #+#             */
/*   Updated: 2017/04/08 11:34:08 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdlib.h>

void		*ft_memalloc(size_t size)
{
	void	*tmp;

	if (size < 1)
		return (NULL);
	tmp = 0;
	if (!(tmp = malloc(size)))
		return (NULL);
	ft_bzero(tmp, size);
	return (tmp);
}
