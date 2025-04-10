/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghsaad <ghsaad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 18:51:14 by ghsaad            #+#    #+#             */
/*   Updated: 2024/07/24 08:57:37 by ghsaad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*arr;
	int	i;

	i = -1;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	arr = (int *)malloc(sizeof(int) * (max - min));
	if (arr == NULL)
	{
		return (-1);
	}
	else
	{
		while (++i < max - min)
			arr[i] = min + i;
		*range = arr;
		return (i);
	}
}

/*
#include <stdio.h>

int main()
{
	int	min;
	int	max;
	int	*range;
	int	size;
	int	i;

	i = 0;
	min = 12;
	max = 21;
	size = ft_ultimate_range(&range, min, max);
	while (i < size)
	{
		printf("%d\n", range[i]);
		i++;
	}
}
*/