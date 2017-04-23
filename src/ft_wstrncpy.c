/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstrncpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/23 12:00:44 by jlagneau          #+#    #+#             */
/*   Updated: 2017/04/23 12:03:17 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

wchar_t		*ft_wstrncpy(wchar_t *s1, const wchar_t *s2, size_t n)
{
	size_t	i;

	i = 0;
	ft_bzero(s1, n * sizeof (wchar_t));
	while (s2[i] && i < n)
	{
		s1[i] = s2[i];
		i++;
	}
	return (s1);
}
