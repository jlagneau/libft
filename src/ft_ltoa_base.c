/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ltoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/19 11:55:23 by jlagneau          #+#    #+#             */
/*   Updated: 2017/04/19 12:03:03 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char		*ft_ltoa_base(unsigned long n, const char *base)
{
	char	str[513];
	int		i;
	size_t	rem;
	size_t	base_size;

	i = 0;
	base_size = ft_strlen(base);
	if (!ft_strcmp(base, BASE_DECIMAL))
		return ft_itoa((int)n);
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
