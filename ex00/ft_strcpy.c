/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 14:35:56 by mloureir          #+#    #+#             */
/*   Updated: 2023/07/29 19:42:08 by mloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcpy(char *dest, char *src);

int main()
{
	char source[] = "MOTA";
	char bitch[] = "        ";
	char dest[] = "MIG";
	printf("Source: %s\nDestination: %s\n", source, dest);
	ft_strcpy(dest, source);
	printf("Source: %s\nDestination: %s\n", source, dest);
	return (0);
}
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (dest[i] != '\0')
	{
		dest[i] = '\0';
		i++;
	}
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
