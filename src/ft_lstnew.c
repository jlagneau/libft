/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/01 18:50:05 by jlagneau          #+#    #+#             */
/*   Updated: 2013/12/02 17:36:22 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_def.h>
#include <ft_mem.h>
#include <ft_list.h>

t_list		*ft_lstnew(void const *content, size_t contensize_t)
{
	t_list	*ret;

	ret = NULL;
	if (!(ret = (t_list *)ft_memalloc(sizeof(t_list))))
		return (NULL);
	ret->content = NULL;
	ret->contensize_t = 0;
	ret->next = NULL;
	if (content != NULL)
	{
		if (!(ret->content = (t_list *)ft_memalloc(contensize_t)))
		{
			ft_memdel((void **)&ret);
			return (NULL);
		}
		ret->content = ft_memcpy(ret->content, content, contensize_t);
		ret->contensize_t = contensize_t;
	}
	return (ret);
}
