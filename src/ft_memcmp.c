/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 08:33:44 by jlagneau          #+#    #+#             */
/*   Updated: 2017/04/08 12:09:21 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int						ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned const char	*tmp1 = s1;
	unsigned const char	*tmp2 = s2;
	size_t				i;

	i = 0;
	while (n--)
	{
		if (tmp1[i] != tmp2[i])
			return (tmp1[i] - tmp2[i]);
		i++;
	}
	return (0);
}
