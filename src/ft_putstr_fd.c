/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 08:32:44 by jlagneau          #+#    #+#             */
/*   Updated: 2017/04/08 20:38:28 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <unistd.h>

void		ft_putstr_fd(char const *s, int fd)
{
	size_t	size;

	size = ft_strlen(s);
	if (write(fd, s, size) != (ssize_t)size)
		ft_print_error(__FILE__);
}
