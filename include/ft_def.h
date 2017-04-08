/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_def.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 08:29:44 by jlagneau          #+#    #+#             */
/*   Updated: 2017/04/08 12:46:17 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DEF_H
# define FT_DEF_H
# include <stddef.h>
# define STDIN			0
# define STDOUT			1
# define STDERR			2
# define EXIT_SUCCESS	0
# define EXIT_FAILURE	1
# define BASE_BINARY	"01"
# define BASE_OCTAL		"01234567"
# define BASE_DECIMAL	"0123456789"
# define BASE_HEX_LOWER	"0123456789abcdef"
# define BASE_HEX_UPPER	"0123456789ABCDEF"

typedef enum			e_bool
{TRUE, FALSE}			t_bool;

#endif
