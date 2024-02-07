/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcorreia <mcorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 16:03:49 by mcorreia          #+#    #+#             */
/*   Updated: 2024/01/25 10:41:49 by mcorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)

{
	int	i;

	i = 0;
	if (dest == NULL || src == NULL)
	{
		return (NULL);
	}
	while (n > 0 && src[i])
	{
		dest[i] = src[i];
		i++;
		n--;
	}
	while (n > 0)
	{
		dest[i] = '\0';
		i++;
		n--;
	}
	return (dest);
}


// o n esta representando o numero maximo de caracteres a 
// serem copiados
// unsigned - e um tipo de dado, sempre positivo. e um inteiro sem sinal
