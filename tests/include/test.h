/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/02 04:59:03 by jlagneau          #+#    #+#             */
/*   Updated: 2016/01/02 04:59:03 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTS_H
# define TESTS_H
# include <libft.h>
# include <string.h>

# define TEST_ASSERT(m,t)	if(1){asrt++;if(!(t))return m" in tests/"__FILE__;}
# define TEST_ADD(t)		if(1){char *m=t();if(m)return m;}
# define TEST_RUN(t)		if(1){char *m=t();tsts++;if(m)return m;}

int							tsts;
int							asrt;

typedef						char*(*t_test_fun)(void);

char						*all_tests(void);

char						*test_memset(void);
char						*test_bzero(void);
char						*test_memcpy(void);
char						*test_memccpy(void);

#endif
