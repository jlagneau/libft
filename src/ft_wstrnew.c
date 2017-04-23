/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstrnew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/23 12:10:25 by jlagneau          #+#    #+#             */
/*   Updated: 2017/04/23 12:11:47 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

wchar_t		*ft_wstrnew(size_t size)
{
	wchar_t		*tmp;

	tmp = NULL;
	if (!(tmp) = (wchar_t*)ft_memalloc(size * sizeof (wchar_t) + 1))
		return (NULL);
	return (tmp);
}
