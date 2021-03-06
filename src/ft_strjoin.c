/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 09:22:17 by jlagneau          #+#    #+#             */
/*   Updated: 2017/04/08 13:07:32 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*ret;
	size_t	len;

	ret = NULL;
	len = ft_strlen(s1) + ft_strlen(s2);
	if (!(ret = ft_strnew(len)))
		return (NULL);
	ret = ft_strcat(ret, s1);
	ret = ft_strcat(ret, s2);
	return (ret);
}
