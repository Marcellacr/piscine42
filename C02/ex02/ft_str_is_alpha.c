/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcorreia <mcorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 14:33:03 by mcorreia          #+#    #+#             */
/*   Updated: 2024/01/23 13:01:22 by mcorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)

{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (!((str[i] >= 'A' && str[i] <= 'Z') || 
				(str[i] >= 'a' && str[i] <= 'z')))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// maiusculo de 65 a 90 - Tabel ASCII
// minusculo de 97 a 122 - Tabel ASCII