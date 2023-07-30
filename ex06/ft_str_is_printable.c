/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 10:24:27 by mloureir          #+#    #+#             */
/*   Updated: 2023/07/25 19:28:17 by mloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

int ft_str_is_printable(char *str);

int main()
{
	char teste[] = "";
	printf("Is printable:%d\n",ft_str_is_printable(teste));
	return (0);
}*/
int	ft_str_is_printable(char *str)
{
	int	i;
	int	check;
	int	is_print;

	i = 0;
	if (*str == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		check = str[i];
		if (check >= 32 && check < 127)
		{
			is_print = 1;
		}
		else
			return (0);
		i++;
	}
	return (is_print);
}