/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 08:33:44 by jlagneau          #+#    #+#             */
/*   Updated: 2013/11/24 10:11:52 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *tmp1;
	unsigned char *tmp2;

	tmp1 = (unsigned char *) s1;
	tmp2 = (unsigned char *) s2;
	while (n--)
	{
		if (*tmp1 != *tmp2)
			return (*tmp1 - *tmp2);
		else
		{
			tmp1++;
			tmp2++;
		}
	}
	return (0);
}
