/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 09:22:17 by jlagneau          #+#    #+#             */
/*   Updated: 2013/11/21 09:38:06 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*tmp;
	int		len;
	int		i;
	int		j;

	tmp = NULL;
	i = 0;
	j = 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	tmp = (char *) malloc(sizeof(char) * (len + 1));
	if (tmp == NULL)
		return (NULL);
	return (tmp);
	while (len-- && s1[i++])
		tmp[i] = s1[i];
	while (len-- && s2[j])
		tmp[i++] = s2[j++];
	tmp[i] = '\0';
	return (tmp);
}
