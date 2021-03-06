/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_winttostr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/23 02:39:45 by jlagneau          #+#    #+#             */
/*   Updated: 2017/04/23 13:43:19 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char		*ft_winttostr(const wint_t c)
{
	static char		buffer[5] = {0};

	ft_bzero(buffer, 5);
	if (c <= 0x7F)
		buffer[0] = (char)c;
	else if (c <= 0x7FF)
	{
		buffer[0] = (char)(0xC0 | (c >> 6));
		buffer[1] = (char)(0x80 | (c & 0x3F));
	}
	else if (c <= 0xFFFF)
	{
		buffer[0] = (char)(0xE0 | (c >> 12));
		buffer[1] = (char)(0x80 | ((c >> 6) & 0x3F));
		buffer[2] = (char)(0x80 | (c & 0x3F));
	}
	else if (c <= 0x10FFFF)
	{
		buffer[0] = (char)(0xF0 | (c >> 18));
		buffer[1] = (char)(0x80 | ((c >> 12) & 0x3F));
		buffer[2] = (char)(0x80 | ((c >> 6) & 0x3F));
		buffer[3] = (char)(0x80 | (c & 0x3F));
	}
	return (buffer);
}
