/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcorreia <mcorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 17:05:41 by mcorreia          #+#    #+#             */
/*   Updated: 2024/01/29 12:49:29 by mcorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	res;
	int	sign;

	res = 0;
	sign = 1;
	while (*str == 32 || *str < 32)
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str >= '-')
			sign *= -1;
		else
			sign *= 1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + *str - '0';
		str++;
	}
	return (sign * res);
}

#include <stdio.h>

int	main(void)
{
	char *nbr_teste = " ---+--+1234ab567";
	printf("\n\"%d\"", ft_atoi(nbr_teste));
	return (0);
}
