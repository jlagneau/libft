/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/01 21:55:47 by jlagneau          #+#    #+#             */
/*   Updated: 2017/04/08 11:34:20 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*tmp;
	t_list	*new;

	if (!(tmp = (t_list *)ft_memalloc(sizeof(*lst))))
		return (NULL);
	new = tmp;
	while (lst)
	{
		*tmp = *f(lst);
		if (!(tmp->next = (t_list *)ft_memalloc(sizeof(*lst))))
			return (NULL);
		tmp = tmp->next;
		lst = lst->next;
	}
	return (new);
}
