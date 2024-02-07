/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcorreia <mcorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 13:12:40 by mcorreia          #+#    #+#             */
/*   Updated: 2024/01/29 14:37:23 by mcorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)

{
	while (*str)
	{
		write (1, str, 1);
		str++;
	}
}

/*int	main(void)
{
	char *str = "Marcella";

	ft_putstr(str);
	return (0);
}*/
