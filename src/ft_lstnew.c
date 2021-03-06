/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/01 18:50:05 by jlagneau          #+#    #+#             */
/*   Updated: 2017/04/08 11:33:25 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*ret;

	ret = NULL;
	if (!(ret = (t_list *)ft_memalloc(sizeof(t_list))))
		return (NULL);
	ret->content = NULL;
	ret->content_size = 0;
	ret->next = NULL;
	if (content != NULL)
	{
		if (!(ret->content = (t_list *)ft_memalloc(content_size)))
		{
			ft_memdel((void **)&ret);
			return (NULL);
		}
		ret->content = ft_memcpy(ret->content, content, content_size);
		ret->content_size = content_size;
	}
	return (ret);
}
