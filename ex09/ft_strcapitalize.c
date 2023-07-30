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
	char c[] = "salut, Comment tu vas ? 42mots quarANte-deux; cinquante+et+un";
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

	tick = 0; //if tick = 0 then it's outside of a word and if tick = 1 it means it's already in the word and the first letter was capitalized
	i = 0;
	while (str[i] != '\0')
	{
		check = str[i];
		if (check >= 97 && check <= 122 && tick == 0) //check if it's not in a word and it's a lowercase letter
		{
			str[i] = check - 32;
			tick = 1;
		}
		if (check >= 65 && check <= 90 && tick == 1) //check if there is a capitalized letter in the word
			str[i] = check + 32;
		if ((check < 97 && check > 90) || (check > 122) || (check < 65)) //check if the word has ended 
			tick = 0;
		if (check >= 65 && check <= 90 && tick == 0) //check if a word starts with a capitalized letter already
			tick = 1;
		if (check >= 48 && check <= 57) //check if a word starts with numbers
			tick = 1;
		i++;
	}
	return (str);
}
