
#include "ft_printf.h"

void	put_char(char c, int *count)
{
	write(1, &c, 1);
	(*count)++;
}

void	put_str(const char *s, int *count)
{
	if (!s)
		s = "(null)";
	while (*s)
	{
		put_char(*s, count);
		s++;
	}
}

void	put_nbr(long long n, int is_unsigned, int *count)
{
	size_t	num;

	if (is_unsigned)
		num = (size_t)n;
	else
	{
		if (n < 0)
		{
			put_char('-', count);
			num = (size_t)(-n);
		}
		else
			num = (size_t)n;
	}
	if (num >= 10)
		put_nbr(num / 10, 1, count);
	if (*count != -1)
		put_char((num % 10) + '0', count);
}

void	put_hex(unsigned long n, int uppercase, int *count)
{
	char	*base;

	if (uppercase)
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if (n >= 16)
		put_hex(n / 16, uppercase, count);
	put_char(base[n % 16], count);
}

void	put_ptr(void *ptr, int *count)
{
	unsigned long	address;

	if (!ptr)
	{
		put_str("(nil)", count);
		return ;
	}
	address = (unsigned long)ptr;
	put_str("0x", count);
	put_hex(address, 0, count);
}