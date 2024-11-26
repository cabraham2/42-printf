/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clementabraham <clementabraham@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 03:35:34 by clementabra       #+#    #+#             */
/*   Updated: 2024/11/26 17:06:19 by clementabra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	checker(va_list args, char carac)
{
	int	i;

	i = 0;
	if (carac == 'c')
		i += print_char(va_arg(args, int));
	else if (carac == 's')
		i += print_str(va_arg(args, char *));
	else if (carac == 'p')
		i += print_ptr(va_arg(args, unsigned long));
	else if (carac == 'd' || carac == 'i')
		i += print_int(va_arg(args, int));
	else if (carac == 'u')
		i += print_unsigned(va_arg(args, unsigned int));
	else if (carac == 'x')
		i += print_hex(va_arg(args, unsigned int), 0);
	else if (carac == 'X')
		i += print_hex(va_arg(args, unsigned int), 1);
	else if (carac == '%')
		i += print_char('%');
	return (i);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			len += checker(args, str[i + 1]);
			i++;
		}
		else
			len += print_char(str[i]);
		i++;
	}
	va_end(args);
	return (len);
}
