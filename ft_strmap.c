/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 11:04:53 by jlagneau          #+#    #+#             */
/*   Updated: 2013/11/22 11:19:46 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*ret;
	int		i;

	i = 0;
	ret = NULL;
	ret = (char *) malloc(sizeof(char) * ft_strlen(s));
	if (ret == NULL)
		return (NULL);
	while (s[i])
	{
		ret[i] = f(s[i]);
		i++;
	}
	return (ret);
}
