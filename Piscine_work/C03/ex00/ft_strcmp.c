/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghsaad <ghsaad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 20:07:46 by ghsaad            #+#    #+#             */
/*   Updated: 2024/07/15 12:09:59 by ghsaad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] && s2[i] != '\0') && (s1[i] == s2[i]))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

#include <stdio.h>
#include <string.h>

int main()
{
	char s1[23] = "heluop";
	char s2[23] = "hello";
	char st1[23] = "heluop";
	char st2[23] = "hello";
	printf("mine %d", ft_strcmp(s1, s2));
	printf("\nthe og %d", strcmp(st1, st2));
}
