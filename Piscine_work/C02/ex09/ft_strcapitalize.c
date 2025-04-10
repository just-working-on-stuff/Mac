/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghsaad <ghsaad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 13:57:32 by ghsaad            #+#    #+#             */
/*   Updated: 2024/07/10 13:42:43 by ghsaad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;
	i = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (!(str[i - 1] >= 'a' && str[i - 1] <= 'z'))
			{
				if (!(str[i - 1] >= '0' && str[i - 1] <= '9'))
				{
					if (!(str[i - 1] >= 'A' && str[i - 1] <= 'Z'))
						str[i] -= 32;
				}
			}
		}
		i++;
	}
	return (str);
}

// #include <stdio.h>

// int main (void)
// {
// 	char str[] = "hI my fRIENDS+mYnameSFE";
// 	printf("%s", ft_strcapitalize(str));
// }
