/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/07 11:15:34 by jlagneau          #+#    #+#             */
/*   Updated: 2016/09/07 11:35:36 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_str.h>

#define FT_SWAP(a, b)	((a) ^= (b), (b) ^= (a), (a) ^= (b))

char					*ft_strrev(char *s)
{
	t_size	len;
	t_size	start;
	t_size	end;

	len = ft_strlen(s);
	start = 0;
	end = len - 1;
	while (start < end)
	{
		FT_SWAP(*(s + start), *(s + end));
		start++;
		end--;
	}
	return (s);
}
