/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/02 08:36:28 by jlagneau          #+#    #+#             */
/*   Updated: 2017/04/08 11:27:13 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void		ft_lstaddend(t_list **alst, t_list *new)
{
	t_list	*tmp;

	tmp = ft_lstlast(*alst);
	tmp->next = new;
}
