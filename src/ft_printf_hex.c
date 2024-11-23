/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clementabraham <clementabraham@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 03:35:23 by clementabra       #+#    #+#             */
/*   Updated: 2024/11/23 08:03:38 by clementabra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

int	print_hex(unsigned long value, int asc)
{
	int	i;

	i = 0;
	if (value >= 16)
		i += print_hex(value / 16, asc);
	if (asc == 0)
		i += ft_putchar_printf("0123456789abcdef"[value % 16]);
	else
		i += ft_putchar_printf("0123456789ABCDEF"[value % 16]);
	return (i);
}

int	ft_putchar_printf(char c)
{
	write(1, &c, 1);
	return (1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_putnbr_printf(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (1);
	}
	if (nb < 0)
	{
		ft_putchar_printf('-');
		nb = nb * -1;
	}
	if (nb < 10)
	{
		ft_putchar_printf(nb + '0');
	}
	else
	{
		ft_putnbr_printf(nb / 10);
		ft_putnbr_printf(nb % 10);
	}
	return (1);
}