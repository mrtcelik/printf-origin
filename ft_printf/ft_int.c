/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mucelik <mucelik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 14:32:22 by mucelik           #+#    #+#             */
/*   Updated: 2023/02/12 14:48:24 by mucelik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_int(int a)
{
	int	ret;

	ret = 0;
	if (a == 0)
		return (write(1, "0", 1));
	if (a == -2147483648)
		return (write(1, "-2147483648", 11));
	if (a < 0)
	{
		ret += write(1, "-", 1);
		a *= -1;
	}
	if (a >= 10)
		ret += ft_int(a / 10);
	write(1, &"0123456789"[a % 10], 1);
	return (ret + 1);
}
/*
print the number and return the size of
number ,except unsigned it includes the negative side
*/