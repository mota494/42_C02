/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 15:03:06 by mloureir          #+#    #+#             */
/*   Updated: 2023/07/25 10:11:06 by mloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

char    *ft_strlowcase(char *str);

int main()
{
	char test[] = "AAbdhAaAdsAHFisjENKA";
	int i = 0;
	
	while(test[i] != '\0')
	{
		printf("[%c]", test[i]);
		i++;
	}
	printf("\n");
	i = 0;
	ft_strlowcase(test);
	while(test[i] != '\0')
	{
		printf("[%c]", test[i]);
		i++;
	}
	return (0);
}*/
char	*ft_strlowcase(char *str)
{
	int	i;
	int	check;

	i = 0;
	check = 0;
	while (str[i] != '\0')
	{
		check = str[i];
		if (check >= 65 && check <= 90)
		{
			str[i] = check + 32;
		}
		i++;
	}
	return (str);
}
