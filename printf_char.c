/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_char.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaseque <joaseque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:33:46 by joaseque          #+#    #+#             */
/*   Updated: 2025/10/16 15:33:51 by joaseque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

int	printf_char(int c)
{
	write (1, &c, 1);
	return (1);
}

int	printf_str(char *s)
{
	int	i;

	i = ft_strlen(s);
	write (1, s, i);
	return (i);
}
