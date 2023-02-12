/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mucelik <mucelik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 14:52:00 by mucelik           #+#    #+#             */
/*   Updated: 2023/02/12 15:02:53 by mucelik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex(unsigned int a, char c)
{
	int	ret;

	ret = 0;
	if (a >= 16)
		ret += ft_hex(a / 16, c);
	if (c == 'X')
		write(1, &"0123456789ABCDEF"[a % 16], 1);
	if (c == 'x')
		write(1, &"0123456789abcdef"[a % 16], 1);
	return (ret + 1);
}
/*
    Convert the base1


*/