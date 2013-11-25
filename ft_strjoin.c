/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 09:22:17 by jlagneau          #+#    #+#             */
/*   Updated: 2013/11/25 15:41:24 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*tmp;
	char	*ret;
	int		len;

	if (s1 == 0 || s2 == 0)
		return (0);
	ret = NULL;
	len = ft_strlen(s1) + ft_strlen(s2);
	ret = (char *) malloc(sizeof (char) * (len + 1));
	if (ret == NULL)
		exit(1);
	tmp = ft_strdup(s1);
	ret = ft_strcat(tmp, s2);
	return (tmp);
}
