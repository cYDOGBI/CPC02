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

int	ft_str_is_printable(char *str)
{
	int	ascii;
	int	i;

	if (str[0] == '\0')
		return (0);
	i = -1;
	while (str[++i])
	{
		ascii = str[i];
		if (!(ascii >= 33 && ascii <= 126))
		{
			return (0);
		}
	}
	return (1);
}

// int	main(void)
// {
// 	char	string1[5];
// 	char	string2[5];
// 	char	string3[5];
// 	char	string4[5];
// 	char	string5[5];

// 	strcpy(string1, "ABCD");
// 	strcpy(string2, "1234");
// 	strcpy(string3, "!@#$");
// 	strcpy(string4, "¾");
// 	strcpy(string5, "Å");
// 	printf("String1: %d\n", ft_str_is_printable(string1));
// 	printf("String2: %d\n", ft_str_is_printable(string2));
// 	printf("String3: %d\n", ft_str_is_printable(string3));
// 	printf("String4: %d\n", ft_str_is_printable(string4));
// 	printf("String5: %d\n", ft_str_is_printable(string5));
// 	return (0);
// }
