/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clementabraham <clementabraham@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 15:50:20 by clementabra       #+#    #+#             */
/*   Updated: 2024/11/26 16:34:28 by clementabra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_int(long nb)
{
	int	i;

	i = 0;
	if (nb < 0)
	{
		i += print_char('-');
		nb *= -1;
	}
	if (nb >= 10)
		i += print_int(nb / 10);
	i += print_char(nb % 10 + '0');
	return (i);
}
