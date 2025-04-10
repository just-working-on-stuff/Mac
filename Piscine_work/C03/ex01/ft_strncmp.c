/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghsaad <ghsaad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 20:07:50 by ghsaad            #+#    #+#             */
/*   Updated: 2024/07/15 12:13:01 by ghsaad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>

int main()
{
	char s1[50] = "hellen keller";
	char s2[50] = "hellen kuller";
	char str1[50] = "hellen keller";
	char str2[50] = "hellen kuller";
	int n = 8;
	printf("mine %d\n", ft_strncmp(s1, s2, n));
	printf("the og %d\n", strncmp(str1, str2, n));
}