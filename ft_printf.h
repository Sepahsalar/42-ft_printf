/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asohrabi <asohrabi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:48:30 by asohrabi          #+#    #+#             */
/*   Updated: 2023/11/13 11:40:24 by asohrabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(const char *format, ...);
int		ft_strlen(char *s);
int		ft_putchar(int c);
int		ft_putstr(char *s);
char	*ft_strchr(char *s, int c);
char	*ft_strdup(char *src);
int		ft_putnbr(int n);
int		ft_uns_putnbr(unsigned int n);
int		ft_putpoint(void *ptr);
int		ft_puthex(unsigned int n, char c);

#endif