/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-cl <pmelo-cl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 12:30:24 by pmelo-cl          #+#    #+#             */
/*   Updated: 2025/11/04 13:22:45 by pmelo-cl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	put_variable(char p, va_list args, int *count)
{
	if (p == 'c')
		put_char((char)va_arg(args, int), count);
	else if (p == 's')
		put_str(va_arg(args, char *), count);
	else if (p == 'd' || p == 'i')
		put_nbr(va_arg(args, int),0, count);
	else if (p == 'u')
		put_nbr(va_arg(args, unsigned int),1, count);
	else if (p == 'x')
		put_hex(va_arg(args, unsigned int), 0, count);
	else if (p == 'X')
		put_hex(va_arg(args, unsigned int), 1, count);
	else if (p == 'p')
		put_ptr(va_arg(args, void *), count);
	else if (p == '%')
		put_char('%', count);
	else
	{
		put_char('%', count);
		put_char(p, count);
	}
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;

	count = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
				break ;
			put_variable(*format, args, &count);
		}
		else
			put_char(*format, &count);
		format++;
	}
	va_end(args);
	return (count);
}