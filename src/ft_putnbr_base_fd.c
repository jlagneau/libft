/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/08 11:18:41 by jlagneau          #+#    #+#             */
/*   Updated: 2017/04/08 12:49:57 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void		ft_putnbr_base_fd(unsigned long n, char const *base, int fd)
{
	size_t	base_size;

	base_size = ft_strlen(base);
	if (n >= base_size)
		ft_putnbr_base_fd(n / base_size, base, fd);
	ft_putchar_fd(base[n % base_size], fd);
}
