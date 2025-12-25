/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-cl <pmelo-cl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 12:39:53 by pmelo-cl          #+#    #+#             */
/*   Updated: 2025/11/04 12:50:28 by pmelo-cl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
#include <stdarg.h>

int ft_printf(const char *var, ...);
void	put_char(char c, int *count);
void	put_str(const char *s, int *count);
void	put_nbr(long long n, int is_unsigned, int *count);
void	put_hex(unsigned long n, int uppercase, int *count);
void	put_ptr(void *ptr, int *count);

#endif