/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 08:39:10 by jlagneau          #+#    #+#             */
/*   Updated: 2013/11/25 15:10:17 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_str.h>

int		ft_strnequ(char const *s1, char const *s2, t_size n)
{
	return (ft_strncmp(s1, s2, n) ? 0 : 1);
}