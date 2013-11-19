/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 15:56:48 by jlagneau          #+#    #+#             */
/*   Updated: 2013/11/19 17:14:43 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	char	*tmp;
	size_t	i;

	i = 0;
	tmp = NULL;
	tmp = (char *) malloc (size);
	if (!tmp)
		return (NULL);
	while (i < size)
		tmp[i++] = 0;
	return (tmp);
}
