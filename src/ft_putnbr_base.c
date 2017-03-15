/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/08 11:25:41 by jlagneau          #+#    #+#             */
/*   Updated: 2017/03/16 00:31:02 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_io.h>

void	ft_putnbr_base(unsigned long n, char const *base)
{
	ft_putnbr_base_fd(n, base, 1);
}
