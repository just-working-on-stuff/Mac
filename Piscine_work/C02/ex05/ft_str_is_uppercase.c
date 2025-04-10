/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghsaad <ghsaad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 16:15:57 by ghsaad            #+#    #+#             */
/*   Updated: 2024/07/14 15:49:37 by ghsaad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
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
// 	printf("%d", ft_str_is_uppercase("11234567890"));
// 	printf("\n%d", ft_str_is_uppercase("WERWR"));
// 	printf("\n%d", ft_str_is_uppercase("GETREADYWithME"));
// }
