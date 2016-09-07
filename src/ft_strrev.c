/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/07 11:15:34 by jlagneau          #+#    #+#             */
/*   Updated: 2016/09/07 12:09:13 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_str.h>

void	ft_swap(char *c1, char *c2)
{
	*c1 ^= *c2;
	*c2 ^= *c1;
	*c1 ^= *c2;
}

char	*ft_strrev(char *s)
{
	t_size	len;
	t_size	start;
	t_size	end;

	len = ft_strlen(s);
	start = 0;
	end = len - 1;
	while (start < end)
	{
		ft_swap((s + start), (s + end));
		start++;
		end--;
	}
	return (s);
}
