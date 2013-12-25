/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strarraydel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/01 18:36:55 by jlagneau          #+#    #+#             */
/*   Updated: 2013/12/02 19:20:59 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strarraydel(char **s)
{
	size_t	i;

	if (!s)
		return ;
	i = 0;
	while (s[i] != NULL)
	{
		ft_strdel(&s[i]);
		i++;
	}
	free(s);
	s = NULL;
}
