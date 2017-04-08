/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 08:30:53 by jlagneau          #+#    #+#             */
/*   Updated: 2017/04/08 13:29:44 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char		*ft_strncpy(char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	ft_bzero(s1, n);
	while (s2[i] && i < n)
	{
		s1[i] = s2[i];
		i++;
	}
	return (s1);
}
