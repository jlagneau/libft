/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 08:32:44 by jlagneau          #+#    #+#             */
/*   Updated: 2017/04/08 12:42:13 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdlib.h>
#include <unistd.h>
#include <execinfo.h>

void	ft_putstr_fd(char const *s, int fd)
{
	int		nptr;
	int		i;
	size_t	size;
	void	*tmp[BUFF_SIZE];

	size = ft_strlen(s);
	if (write(fd, s, size) != (ssize_t)size)
	{
		i = 0;
		nptr = backtrace(tmp, BUFF_SIZE);
		while (i < nptr)
		{
			ft_putendl_fd(tmp[i], 2);
			i++;
		}
		exit(-1);
	}
}
