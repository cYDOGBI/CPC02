/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaranje <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 16:09:32 by tlaranje          #+#    #+#             */
/*   Updated: 2025/07/22 16:09:35 by tlaranje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char	des;
	char	src;

	des = 'A';
	src = 'B';
	ft_strcpy(&des, &src);
	printf("Source: %c", src);
	printf("Distination: %c", des);
	return (0);
}
