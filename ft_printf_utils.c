/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asohrabi <asohrabi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 08:33:48 by asohrabi          #+#    #+#             */
/*   Updated: 2023/11/13 09:34:04 by asohrabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	ft_putchar(int c)
{
	if (write(1, &c, 1) < 0)
		return (-1);
	return (1);
}

int	ft_putstr(char *s)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	if (!s)
	{
		if (ft_putstr("(null)") < 0)
			return (-1);
		return (6);
	}
	while (s[i])
	{
		if (ft_putchar(s[i]) < 0)
			return (-1);
		len++;
		i++;
	}
	return (len);
}

char	*ft_strdup(char *src)
{
	char	*p;
	int		i;

	i = 0;
	p = (char *)malloc(ft_strlen(src) + 1);
	if (!p)
		return (NULL);
	while (src[i])
	{
		p[i] = ((char *)src)[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

char	*ft_strchr(char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char)c)
			return (s);
		s++;
	}
	if ((char)c == *s)
		return (s);
	return (0);
}
