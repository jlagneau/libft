/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/01 16:53:06 by jlagneau          #+#    #+#             */
/*   Updated: 2016/01/01 16:53:06 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

t_test_fun			g_test_fun[2] = {
	test_memset,
	NULL
};

char				*all_tests(void)
{
	int				i;

	i = 0;
	while (g_test_fun[i])
		TEST_ADD(g_test_fun[i++]);
	return (NULL);
}
