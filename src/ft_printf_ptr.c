/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clementabraham <clementabraham@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 03:35:32 by clementabra       #+#    #+#             */
/*   Updated: 2024/11/23 09:48:57 by clementabra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

int	print_ptr(unsigned long value)
{
	int i;

	i = 0;
	if (value == 0)
	{
		i += ft_putstr_printf("(nil)");
		return (i);
	}
	i += ft_putchar_printf('0');
	i += ft_putchar_printf('x');
	i += print_hex(value, 0);
	return (i);
}

int	print_unsigned(unsigned long nb)
{
	int i;

	i = 0;
	if (nb >= 10)
		i += print_unsigned(nb / 10);
	i += ft_putchar_printf(nb % 10 + '0');
	return (i);
}