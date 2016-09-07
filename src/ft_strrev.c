/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/07 11:15:34 by jlagneau          #+#    #+#             */
/*   Updated: 2016/09/07 12:00:28 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_str.h>

char					*ft_strrev(char *s)
{
	t_size	len;
	t_size	start;
	t_size	end;
	char	tmp;

	len = ft_strlen(s);
	start = 0;
	end = len - 1;
	while (start < end)
	{
		tmp = *(s + start);
		*(s + start) = *(s + end);
		*(s + end) = tmp;
		start++;
		end--;
	}
	return (s);
}
