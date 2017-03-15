/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/07 10:58:27 by jlagneau          #+#    #+#             */
/*   Updated: 2017/03/16 00:29:54 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_def.h>
#include <ft_str.h>

char	*ft_itoa_base(unsigned int n, char const *base)
{
	char	str[64];
	int		rem;
	int		i;
	size_t	base_size;

	i = 0;
	base_size = ft_strlen(base);
	if (!ft_strcmp(base, BASE_DECIMAL))
		return ft_itoa(n);
	if (n == 0)
		return ft_strdup("0");
	while (n != 0)
	{
		rem = n % base_size;
		str[i++] = base[rem];
		n /= base_size;
	}
	str[i] = '\0';
	return ft_strdup(ft_strrev(str));
}
