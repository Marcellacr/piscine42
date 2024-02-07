/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcorreia <mcorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 17:23:43 by mcorreia          #+#    #+#             */
/*   Updated: 2024/01/31 18:59:17 by mcorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)

{
	int	x;

	x = 1;
	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (x);
	while (nb > 0)
	{
		x *= nb;
		nb--;
	}
	return (x);
}
