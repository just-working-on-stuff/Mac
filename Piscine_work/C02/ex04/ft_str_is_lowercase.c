/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghsaad <ghsaad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 16:15:54 by ghsaad            #+#    #+#             */
/*   Updated: 2024/07/14 15:49:46 by ghsaad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

// #include <stdio.h>

// int main()
// {
// 	printf("%d", ft_str_is_lowercase("11234567890"));
// 	printf("\n%d", ft_str_is_lowercase("helo"));
// 	printf("\n%d", ft_str_is_lowercase("GWEV_)SDf444"));
// }
