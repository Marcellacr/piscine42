/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcorreia <mcorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 14:06:56 by mcorreia          #+#    #+#             */
/*   Updated: 2024/01/17 12:01:51 by mcorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)

{
	int	c;
	int	d;

	c = a / b;
	*div = c;
	d = a % b;
	*mod = d;
}
