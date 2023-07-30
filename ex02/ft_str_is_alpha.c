/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 17:08:22 by mloureir          #+#    #+#             */
/*   Updated: 2023/07/26 19:21:10 by mloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

int ft_str_is_alpha(char *str);

int main()
{
	char carac[] = "";
	int d;
	d = ft_str_is_alpha(carac);
	printf("\nIs alpha: %d", d);
	return 0;
}*/
int	ft_str_is_alpha(char *str)
{
	int	i;
	int	alpha;
	int	check;

	i = 0;
	check = 0;
	alpha = 0;
	if (*str == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		alpha = str[i];
		if ((alpha >= 65 && alpha <= 90) || (alpha >= 97 && alpha <= 122))
		{
			check = 1;
		}
		else
			return (0);
		i++;
	}
	return (check);
}
