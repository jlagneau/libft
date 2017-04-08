/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 08:33:12 by jlagneau          #+#    #+#             */
/*   Updated: 2017/04/08 12:47:30 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdlib.h>
#include <unistd.h>
#include <execinfo.h>

void	ft_putchar_fd(char c, int fd)
{
	int		nptr;
	int		i;
	void	*tmp[BUFF_SIZE];

	if (write(fd, &c, 1) != 1)
	{
		i = 0;
		nptr = backtrace(tmp, BUFF_SIZE);
		while (i < nptr)
		{
			ft_putendl_fd(tmp[i], STDERR);
			i++;
		}
		exit(-1);
	}
}
