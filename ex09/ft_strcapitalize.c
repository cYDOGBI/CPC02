/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaranje <tlaranje@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 09:52:23 by tlaranje          #+#    #+#             */
/*   Updated: 2025/07/23 09:52:27 by tlaranje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool	is_low_up(char *l)
{
	int	ascii;

	ascii = 0;
	ascii = ascii[l];
	if (ascii >= 33 && ascii <= 126)
	{
		return (true);
	}
	else
	{
		return (false);
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	
	i = -1;
	while (str[++i])
	{
		
		if (is_low_up(&str[i]) && (str[i-1] == ' '))
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}

int	main(void)
{
	char	string1[10];

	strcpy(string1, "ola, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um");
	printf("Antes: %s\n", string1);
	printf("Depois: %s\n", ft_strcapitalize(string1));
	return (0);
}
