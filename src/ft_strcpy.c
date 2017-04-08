/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 08:38:17 by jlagneau          #+#    #+#             */
/*   Updated: 2017/04/08 13:01:39 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char		*ft_strcpy(char *s1, const char *s2)
{
	size_t	len;

	len = ft_strlen(s2);
	ft_bzero(s1, len + 1);
	ft_memcpy(s1, s2, len);
	return (s1);
}
