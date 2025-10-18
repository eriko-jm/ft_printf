/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaseque <joaseque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 18:55:06 by joaseque          #+#    #+#             */
/*   Updated: 2025/10/16 18:58:29 by joaseque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"
#include <stdarg.h>

int	ft_printf(char const *str, ...)
{
	va_list	vars;
	int		i;
	int		count;

	va_start(vars, str);
	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%' && str[i + 1] != '\0')
		{
			i++;
			if (str[i] == 'c')
				count += printf_char(va_arg(vars, int));
			else if (str[i] == 's')
				count += printf_str(va_arg(vars, char *));
			else if (str[i] == 'd' || str[i] == 'i')
				count += print_int(va_arg(vars, int));
			else if (str[i] == 'u')
				count += print_uns(va_arg(vars, unsigned int));
			else if (str[i] == 'x')
				count += print_hex_low(va_arg(vars, unsigned int));
			else if (str[i] == 'X')
				count += print_hex_upp(va_arg(vars, unsigned int));
			else if (str[i] == 'p')
				count += print_ptr(va_arg(vars, void *));
			else if (str[i] == '%')
			{
				write(1, "%", 1);
				count++;
			}
		}
		else
			count += write(1, &str[i], 1);
		i++;
	}
	va_end(vars);
	return (count);
}

int main ()
{
	ft_printf("hola mundo");
	return (0);
}

