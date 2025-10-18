/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaseque <joaseque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 13:40:19 by joaseque          #+#    #+#             */
/*   Updated: 2025/10/16 18:48:26 by joaseque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "libft/libft.h"

int	print_int(int nb);
int	print_uns(unsigned int nb);
int	printf_str(char *s);
int	printf_char(int c);
int	print_hex_upp(unsigned int nb);
int	print_ptr(void *ptr);
int	print_hex_low(unsigned int nb);
int	ft_printf(char const *str, ...);

#endif
