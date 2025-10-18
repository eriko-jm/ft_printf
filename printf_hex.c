/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaseque <joaseque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 16:16:40 by joaseque          #+#    #+#             */
/*   Updated: 2025/10/16 18:46:40 by joaseque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

static void	putnbr_base(unsigned long nb, const char *base, int fd)
{
	unsigned long	base_len;

	base_len = 0;
	while (base[base_len] != '\0')
		base_len++;
	if (nb >= base_len)
		putnbr_base(nb / base_len, base, fd);
	ft_putchar_fd(base[nb % base_len], fd);
}

int	print_hex_low(unsigned int nb)
{
	unsigned int	len;
	unsigned int	tmp;

	len = 0;
	if (nb == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	putnbr_base(nb, "0123456789abcdef", 1);
	tmp = nb;
	while (tmp > 0)
	{
		tmp = tmp / 16;
		len++;
	}
	return (len);
}

int	print_hex_upp(unsigned int nb)
{
	unsigned int	len;
	unsigned int	tmp;

	len = 0;
	if (nb == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	putnbr_base(nb, "0123456789ABCDEF", 1);
	tmp = nb;
	while (tmp > 0)
	{
		tmp = tmp / 16;
		len++;
	}
	return (len);
}

int	print_ptr(void *ptr)
{
	int				len;
	unsigned long	num;
	unsigned long	tmp;

	write(1, "0x", 2);
	len = 2;
	if (ptr == NULL)
	{
		write(1, "0", 1);
		return (3);
	}
	num = (unsigned long) ptr;
	putnbr_base(num, "0123456789abcdef", 1);
	tmp = num;
	while (tmp > 0)
	{
		tmp = tmp / 16;
		len++;
	}
	return (len);
}
