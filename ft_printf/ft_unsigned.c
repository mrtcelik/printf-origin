/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mucelik <mucelik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 14:07:07 by mucelik           #+#    #+#             */
/*   Updated: 2023/02/12 14:33:04 by mucelik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsigned(unsigned int a)
{
	int	ret;

	ret = 0;
	if (a >= 10)
		ret += ft_unsigned(a / 10);
	write(1, &"0123456789"[a % 10], 1);
	return (ret + 1);
}
//print the number and return the size