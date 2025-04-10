/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghsaad <ghsaad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 20:07:56 by ghsaad            #+#    #+#             */
/*   Updated: 2024/07/15 12:14:25 by ghsaad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	s;

	i = 0;
	s = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (s < nb && src[s] != '\0')
	{
		dest[i + s] = src [s];
		s++;
	}
	dest[i + s] = '\0';
	return (dest);
}

#include <stdio.h>
int	main()
{
	char src[] = "huge sentence";
	char dest[] = "finish this ";
	printf("%s", ft_strncat(dest, src, 3));
}
