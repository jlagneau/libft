/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/01 21:55:47 by jlagneau          #+#    #+#             */
/*   Updated: 2013/12/02 17:36:49 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*tmp;
	t_list	*p;

	if (!(tmp = (t_list *)ft_memalloc(sizeof(*lst))))
		return (NULL);
	p = tmp;
	while (lst != NULL)
	{
		*tmp = *f(lst);
		if (!(tmp->next = (t_list *)ft_memalloc(sizeof(*lst))))
			return (NULL);
		tmp = tmp->next;
		lst = lst->next;
	}
	return (p);
}
