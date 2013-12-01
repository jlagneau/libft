/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_array_del.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/01 18:36:55 by jlagneau          #+#    #+#             */
/*   Updated: 2013/12/01 18:46:08 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_str_array_del(char **s)
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
