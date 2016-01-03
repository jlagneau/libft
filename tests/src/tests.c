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

static char		*test_example(void)
{
	TEST_ASSERT(
		"Assert example in "__FILE__,
		42 == 42
	);
	return (NULL);
}

char			*all_tests(void)
{
	TEST_RUN(test_example);
	return (NULL);
}
