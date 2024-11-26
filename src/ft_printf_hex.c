/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clementabraham <clementabraham@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 03:35:23 by clementabra       #+#    #+#             */
/*   Updated: 2024/11/26 16:34:05 by clementabra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_hex(unsigned long value, int asc)
{
	int	i;

	i = 0;
	if (value >= 16)
		i += print_hex(value / 16, asc);
	if (asc == 0)
		i += print_char("0123456789abcdef"[value % 16]);
	else
		i += print_char("0123456789ABCDEF"[value % 16]);
	return (i);
}
