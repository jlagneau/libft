/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/02 08:36:28 by jlagneau          #+#    #+#             */
/*   Updated: 2013/12/08 21:27:05 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <libft.h>

static int			ft_set_line(char *buf, char **save, char **line)
{
	char*			pos;
	char*			tmp;

	if (!(*save = ft_strrealloc(save, ft_strlen(*save) + ft_strlen(buf))))
		return (-1);
	*save = ft_strcat(*save, buf);
	if ((pos = ft_strchr(*save, '\n')))
	{
		if (!(*line = ft_strrealloc(line, pos - *save)))
			return (-1);
		*line = ft_strncpy(*line, *save, pos - *save);
		if (!(tmp = ft_strsub(*save, pos + 1 - *save, ft_strlen(*save))))
			return (-1);
		ft_strdel(save);
		if (*tmp)
			*save = tmp;
		return (1);
	}
	return (0);
}

int					get_next_line(int const fd, char **line)
{
	int				ret;
	int				stream;
	char			buf[BUFF_SIZE + 1];
	static char		*save = NULL;

	ft_bzero(buf, BUFF_SIZE + 1);
	while ((stream = read(fd, buf, BUFF_SIZE)) > 0 || save)
	{
		if (stream == -1)
			return (-1);
		if (stream == 0)
		{
			if (!(*line = ft_strrealloc(line, ft_strlen(save))))
				return (-1);
			*line = ft_strcpy(*line, save);
			ft_strdel(&save);
			return (0);
		}
		ret = ft_set_line(buf, &save, line);
		if (ret == 1)
			return (1);
		else if (ret == -1)
			return (-1);
	}
	return (0);
}
