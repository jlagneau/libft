/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/02 08:36:28 by jlagneau          #+#    #+#             */
/*   Updated: 2017/04/08 11:30:23 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_list		*ft_lstlast(t_list *alst)
{
	t_list	*tmp;

	tmp = alst;
	while (tmp->next)
		tmp = tmp->next;
	return (tmp);
}
