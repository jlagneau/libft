/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wchartostr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/23 02:51:08 by jlagneau          #+#    #+#             */
/*   Updated: 2017/04/23 13:40:28 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char			*ft_wchartostr(const wchar_t *s)
{
	size_t		i;
	char		*tmp;
	ssize_t		len;

	i = 0;
	tmp = NULL;
	len = ft_wstrlen(s);
	if (len == -1)
		return (NULL);
	if (!(tmp = ft_strnew((size_t)len)))
		ft_puterr_and_exit(__FILE__);
	while (s[i])
	{
		tmp = ft_strcat(tmp, ft_winttostr((wint_t)s[i]));
		i++;
	}
	return (tmp);
}
