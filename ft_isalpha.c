/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 08:35:14 by jlagneau          #+#    #+#             */
/*   Updated: 2013/11/24 10:19:48 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalpha(int c)
{
	ft_putstr("ft_isalpha");
	c = (unsigned char) c;
	if ((c > 64 && c < 91)
		|| (c > 96 && c < 123))
		return (1);
	return (0);
}
