/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stradel.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/01 18:36:55 by jlagneau          #+#    #+#             */
/*   Updated: 2017/04/08 12:52:07 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdlib.h>

void		ft_stradel(char ***a)
{
	char	**tmp;

	tmp = *a;
	while (*tmp)
	{
		ft_strdel(&(*tmp));
		tmp++;
	}
	free(*a);
	*a = NULL;
}
