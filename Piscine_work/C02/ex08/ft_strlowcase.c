/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghsaad <ghsaad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 17:10:56 by ghsaad            #+#    #+#             */
/*   Updated: 2024/07/14 17:17:51 by ghsaad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] += 32;
		}
		else
		{
			i++;
		}
	}
	return (str);
}

// #include <stdio.h>

// int main()
// {
// 	char str[] = "MAKESMALL";
// 	printf("%s", ft_strlowcase(str));
// }
