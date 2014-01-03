/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stradel.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/01 18:36:55 by jlagneau          #+#    #+#             */
/*   Updated: 2013/12/02 19:20:59 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdlib.h>

void	ft_stradel(char ***a)
{
	size_t	i;

	if (!*a)
		return ;
	i = 0;
	while (*a[i] != NULL)
	{
		ft_strdel(&(*a[i]));
		i++;
	}
	free(*a);
	*a = NULL;
}