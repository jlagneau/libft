/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/03 03:34:10 by jlagneau          #+#    #+#             */
/*   Updated: 2016/01/03 03:34:10 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

static char		*unit_test1(void)
{
	char		a[100];
	char		b[100];

	memset(a, 42, 100);
	ft_memset(b, 42, 100);
	TEST_ASSERT(
		"Compare ft_memset values with original",
		memcmp(a, b, 100) == 0
	);
	TEST_ASSERT(
		"Compare ft_memset return with original",
		memset(a, 84, 100) == ft_memset(a, 84, 100)
	);
	a[0] = 1;
	ft_memset(a, 0, 0);
	TEST_ASSERT(
		"Check if ft_memset size is 0",
		a[0] == 1
	);
	return (NULL);
}

char			*test_memset(void)
{
	TEST_RUN(unit_test1);
	return (NULL);
}
