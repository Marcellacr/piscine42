/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcorreia <mcorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 19:06:54 by mcorreia          #+#    #+#             */
/*   Updated: 2024/02/01 09:00:08 by mcorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)


{
	int	x;

	x = 0;
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 1)
	{
		return (1);
	}
	while (nb != (x * x))
	{
		if (nb < (x * x) || x > 46340)
		{
			return (0);
		}
		x++;
	}
	return (x);
}

/* #include <stdio.h>
int main(void)
{
	int	raizd;

	raizd = 64;
	printf("%d", ft_sqrt(raizd));
} */