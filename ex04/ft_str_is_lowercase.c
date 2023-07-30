/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 09:54:03 by mloureir          #+#    #+#             */
/*   Updated: 2023/07/25 19:18:41 by mloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

int ft_str_is_lowercase(char *str);

int main()
{
	char teste[] = "fjhbjhfbadsbf";
	int d = 0;
	d = ft_str_is_lowercase(teste);
	printf("\nIs lowercase: %d", d);
	return (0);
}*/
int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	is_lowercase;
	int	check;

	check = 0;
	i = 0;
	is_lowercase = 0;
	if (*str == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		check = str[i];
		if (check >= 97 && check <= 122)
		{
			is_lowercase = 1;
		}
		else
			return (0);
		i++;
	}
	return (is_lowercase);
}
