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
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <execinfo.h>

void	ft_putstr_fd(char const *s, int fd)
{
	int		nptr;
	size_t	size;
	void	*tmp[BUFF_SIZE];

	size = ft_strlen(s);
	if (write(fd, s, size) != (ssize_t)size)
	{
		nptr = backtrace(tmp, BUFF_SIZE);
		backtrace_symbols_fd(tmp, nptr, STDERR);
		perror(__FILE__);
		exit(-1);
	}
}
