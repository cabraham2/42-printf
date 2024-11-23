/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clementabraham <clementabraham@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 03:35:34 by clementabra       #+#    #+#             */
/*   Updated: 2024/11/23 09:50:35 by clementabra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

int	checker(va_list args, char carac)
{
	int i;

	i = 0;
	if (carac == 'c')
		 i += ft_putchar_printf(va_arg(args, int));
	else if (carac == 's')
		 i += ft_putstr_printf(va_arg(args, char *));
	else if (carac == 'p')
		 i += print_ptr(va_arg(args, int));
	else if (carac == 'd')
		 i += ft_putnbr_printf(va_arg(args, int));
	else if (carac == 'i')
		 i += ft_putnbr_printf(va_arg(args, int));
	else if (carac == 'u')
		 i += print_unsigned(va_arg(args, unsigned int));
	else if (carac == 'x')
		 i += print_hex(va_arg(args, unsigned int), 0);
	else if (carac == 'X')
		 i += print_hex(va_arg(args, unsigned int), 1);
	else if (carac == '%')
		 i += ft_putchar_printf('%');
	return (i);
}

int	ft_printf(const char *str, ...)
{
	va_list args;
	int		i;
	int 	len;

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
			len += ft_putchar_printf(str[i]);
		i++;
	}
	va_end(args);
	return (len);
}