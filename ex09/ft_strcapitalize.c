/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 17:40:24 by mloureir          #+#    #+#             */
/*   Updated: 2023/07/27 11:48:35 by mloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*char    *ft_strcapitalize(char *str);

#include <stdio.h>

int main()
{
	char c[] = "salut, Comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s\n\n", c);
	ft_strcapitalize(c);
	printf("%s\n\n", c);
	return (0);
}*/
char	*ft_strcapitalize(char *str)
{
	int	i;
	int	check;
	int	tick;

	tick = 0;
	i = 0;
	while (str[i] != '\0')
	{
		check = str[i];
		if (check >= 97 && check <= 122 && tick == 0)
		{
			str[i] = check - 32;
			tick = 1;
		}
		if (check >= 65 && check <= 90 && tick == 1)
			str[i] = check + 32;
		if ((check < 97 && check > 90) || (check > 122) || (check < 65)) 
			tick = 0;
		if (check >= 65 && check <= 90 && tick == 0)
			tick = 1;
		if (check >= 48 && check <= 57)
			tick = 1;
		i++;
	}
	return (str);
}
