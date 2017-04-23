/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstrlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/23 02:24:33 by jlagneau          #+#    #+#             */
/*   Updated: 2017/04/23 02:33:59 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

ssize_t		ft_wstrlen(const wchar_t *s)
{
	size_t		i;
	ssize_t		tmp;
	ssize_t		ret;

	i = 0;
	ret = 0;
	while (s[i])
	{
		tmp = ft_wcharlen(s[i]);
		if (tmp == -1)
			return (-1);
		ret += tmp;
		i++;
	}
	return (ret);
}
