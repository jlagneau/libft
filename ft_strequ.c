/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 08:31:41 by jlagneau          #+#    #+#             */
/*   Updated: 2013/11/25 15:02:46 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	if (s1 == 0 || s2 == 0)
		return (0);
	if (ft_strlen(s1) == ft_strlen(s2))
	{
		if (ft_strcmp(s1, s2) != 0)
			return (1);
	}
	return (0);
}
