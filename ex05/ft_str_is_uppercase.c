/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 10:14:04 by mloureir          #+#    #+#             */
/*   Updated: 2023/07/25 19:20:24 by mloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

int ft_str_is_uppercase(char *str);

int main()
{
	char teste[] = "KSAKLDA";
	int d = 0;
	d = ft_str_is_uppercase(teste);
	printf("\nIs uppercase: %d", d);
	return (0);
}*/
int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	is_uppercase;
	int	check;

	check = 0;
	i = 0;
	is_uppercase = 0;
	if (*str == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		check = str[i];
		if (check >= 65 && check <= 90)
		{
			is_uppercase = 1;
		}
		else
			return (0);
		i++;
	}
	return (is_uppercase);
}
