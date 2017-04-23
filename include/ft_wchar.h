/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wchar.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/23 02:31:26 by jlagneau          #+#    #+#             */
/*   Updated: 2017/04/23 12:13:04 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_WCHAR_H
# define FT_WCHAR_H
# include <unistd.h>
# include <wchar.h>

ssize_t		ft_wcharlen(const wchar_t c);
ssize_t		ft_wstrlen(const wchar_t *s);
size_t		ft_wstrwlen(const wchar_t *s);
char		*ft_winttostr(const wint_t c);
char		*ft_wchartostr(const wchar_t *s);
wchar_t		*ft_wstrncpy(wchar_t *s1, const wchar_t *s2, size_t n);
wchar_t		*ft_wstrnew(size_t size);

#endif
