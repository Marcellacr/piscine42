/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcorreia <mcorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 15:07:11 by mcorreia          #+#    #+#             */
/*   Updated: 2024/01/27 12:06:43 by mcorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)

{
	unsigned int	i;
	unsigned int	destlen;

	i = 0;
	destlen = 0;
	while (dest[destlen] != '\0')
		destlen++;
	while (src[i] != '\0' && i < nb)
	{
		dest[destlen + i] = src[i];
		i++;
	}
	dest[destlen + i] = '\0';
	return (dest);
}
