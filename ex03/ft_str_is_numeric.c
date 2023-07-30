/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 09:33:51 by mloureir          #+#    #+#             */
/*   Updated: 2023/07/25 19:18:05 by mloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

int ft_str_is_numeric(char *str);

int main()
{
	char teste[] = "5627---3786";
	int d = 0;
	d = ft_str_is_numeric(teste);
	printf("\nIs numeric: %d", d);
	return (0);
}*/
int	ft_str_is_numeric(char *str)
{
	int	i;
	int	is_numeric;
	int	check;

	check = 0;
	i = 0;
	is_numeric = 0;
	if (*str == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		check = str[i];
		if (check >= 48 && check <= 57)
		{
			is_numeric = 1;
		}
		else
			return (0);
		i++;
	}
	return (is_numeric);
}
