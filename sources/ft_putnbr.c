/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 08:37:45 by jlagneau          #+#    #+#             */
/*   Updated: 2013/12/02 15:39:23 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	if (n < 0)
		ft_putchar('-');
	if (n < 0)
	{
		if (n < -9)
			ft_putnbr(n / -10);
		ft_putchar(n % 10 * -1 + '0');
	}
	if (n >= 0)
	{
		if (n > 9)
			ft_putnbr(n / 10);
		ft_putchar(n % 10 + '0');
	}
}