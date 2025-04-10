/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghsaad <ghsaad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 18:51:18 by ghsaad            #+#    #+#             */
/*   Updated: 2024/07/24 09:01:31 by ghsaad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	memallocate(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	words;

	i = 0;
	j = 0;
	words = 0;
	while (i < size)
	{
		while (strs[i][j])
		{
			j++;
			words++;
		}
		j = 0;
		while (sep[j] && i < size - 1)
		{
			j++;
			words++;
		}
		i++;
		j = 0;
	}
	return (words);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		words;
	char	*result;

	i = 0;
	j = 0;
	words = 0;
	result = malloc(sizeof(memallocate(size, strs, sep) + 1));
	while (i < size)
	{
		while (strs[i][j])
		{
			result[words++] = strs[i][j++];
		}
		j = 0;
		while (sep[j] && i < size - 1)
		{
			result[words++] = sep[j++];
		}
		i++;
		j = 0;
	}
	result[words] = '\0';
	return (result);
}

/*
int main()
{
	char *strs[] = {"hello","how","are","you"};
	int size = 4;
	char *sep = "---";
	printf("%s",ft_strjoin(size,strs,sep));
}
*/