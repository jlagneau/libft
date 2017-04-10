/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puterr_and_exit.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/10 02:27:43 by jlagneau          #+#    #+#             */
/*   Updated: 2017/04/10 02:27:43 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdio.h>
#include <stdlib.h>
#include <execinfo.h>

void		ft_puterr_and_exit(const char *filename)
{
	int		nptr;
	void	*tmp[BUFF_SIZE];

	perror(filename);
	nptr = backtrace(tmp, BUFF_SIZE);
	backtrace_symbols_fd(tmp, nptr, STDERR);
	exit(-1);
}
