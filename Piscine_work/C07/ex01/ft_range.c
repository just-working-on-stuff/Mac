/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghsaad <ghsaad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 18:51:11 by ghsaad            #+#    #+#             */
/*   Updated: 2024/07/23 20:29:08 by ghsaad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;

	i = 0;
	if (min >= max)
		return (0);
	arr = (int *)malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}

// #include <stdio.h>
// int main ()
// {
// 	int	i;
// 	int	*array;
// 	int	min;
// 	int	max;

// 	i = 0;
// 	min = 207;
// 	max = 305;
// 	array = ft_range(min, max);
// 	while (i < (max - min))
// 	{
// 		printf("%d\n", array [i]);
// 		i++;
// 	}
// }