/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 15:03:06 by mloureir          #+#    #+#             */
/*   Updated: 2023/07/24 17:08:35 by mloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

char    *ft_strupcase(char *str);

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
	ft_strupcase(test);
	while(test[i] != '\0')
	{
		printf("[%c]", test[i]);
		i++;
	}
	return (0);
}*/
char	*ft_strupcase(char *str)
{
	int	i;
	int	check;

	i = 0;
	check = 0;
	while (str[i] != '\0')
	{
		check = str[i];
		if (check >= 97 && check <= 122)
		{
			str[i] = check - 32;
		}
		i++;
	}
	return (str);
}
