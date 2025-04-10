/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghsaad <ghsaad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 08:46:34 by ghsaad            #+#    #+#             */
/*   Updated: 2024/07/24 08:52:38 by ghsaad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	num;

	num = 1;
	if (nb > 0)
	{
		while (num * num <= nb)
		{
			if (num * num == nb)
				return (num);
			else if (num >= 46341)
				return (0);
			num++;
		}
	}
	return (0);
}

/*
#include <stdio.h>
int	main ()
{
	printf("%d", ft_sqrt(16));
}
*/