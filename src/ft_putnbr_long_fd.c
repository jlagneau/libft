/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_long_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/08 11:15:09 by jlagneau          #+#    #+#             */
/*   Updated: 2017/04/08 12:51:15 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_putnbr_long_fd(long n, int fd)
{
	const long	sign = (n < 0) ? -1 : 1;

	if (sign == -1)
		ft_putchar_fd('-', fd);
	if (n < -9 || n > 9)
		ft_putnbr_long_fd(n / 10 * sign, fd);
	ft_putchar_fd((char)(n % 10 * sign + '0'), fd);
}
