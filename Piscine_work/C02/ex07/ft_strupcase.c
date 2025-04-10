/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghsaad <ghsaad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 13:47:50 by ghsaad            #+#    #+#             */
/*   Updated: 2024/07/14 15:49:18 by ghsaad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] -= 32;
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
// 	char str[] = "makebig";
// 	printf("%s", ft_strupcase(str));
// }