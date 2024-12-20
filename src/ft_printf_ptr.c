/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clementabraham <clementabraham@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 03:35:32 by clementabra       #+#    #+#             */
/*   Updated: 2024/11/26 16:52:12 by clementabra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_ptr(unsigned long value)
{
	int	i;

	i = 0;
	if (value == 0)
	{
		i += print_str("(nil)");
		return (i);
	}
	i += print_char('0');
	i += print_char('x');
	i += print_hex(value, 0);
	return (i);
}

int	print_unsigned(unsigned long nb)
{
	int	i;

	i = 0;
	if (nb >= 10)
		i += print_unsigned(nb / 10);
	i += print_char(nb % 10 + '0');
	return (i);
}
