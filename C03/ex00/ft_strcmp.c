/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcorreia <mcorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 13:23:36 by mcorreia          #+#    #+#             */
/*   Updated: 2024/01/29 09:46:04 by mcorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)

{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

#include <stdio.h>

int	main(void)
{
	char	*s1 = "abc,";
	char	*s2 = "abc ";
	printf("%d", ft_strcmp(s1, s2));
	return(0);
}
/*
o primeiro s1[i] se refere ao nulo, entao, se nao foi nulo 
 e (&&) for s1 e s2 (s1[i] == s2[i]) forem iguais icrementa (i++)
*/