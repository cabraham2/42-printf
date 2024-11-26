/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clementabraham <clementabraham@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 15:47:06 by clementabra       #+#    #+#             */
/*   Updated: 2024/11/26 17:02:11 by clementabra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

///-------------------- PRINTF --------------------
int				print_hex(unsigned long value, int asc);
int				checker(va_list args, char carac);
int				ft_printf(const char *str, ...);
void			ft_putnbr(int nb);
void			ft_putstr(char *str);
int				print_ptr(unsigned long value);
int				print_unsigned(unsigned long nb);
int				print_int(long nb);
int				print_str(char *str);
int				print_char(char c);
int				print_percent(void);
