/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghsaad <ghsaad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 19:01:46 by ghsaad            #+#    #+#             */
/*   Updated: 2025/02/24 19:01:46 by ghsaad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin(char *str1, char *str2)
{
	char	*result;
	size_t	i;
	size_t	j;

	if (!str1 && !str2)
		return (NULL);
	if (!str1)
		return (ft_strdup(str2));
	if (!str2)
		return (ft_strdup(str1));
	result = malloc(ft_strlen(str1) + ft_strlen(str2) + 1);
	if (!result)
		return (NULL);
	i = -1;
	while (str1[++i])
		result[i] = str1[i];
	j = -1;
	while (str2[++j])
		result[i + j] = str2[j];
	result[i + j] = '\0';
	free(str1);
	return (result);
}
char	*ft_strchr(char *str, int c)
{
	int		i;

	if (!str)
		return (NULL);
	i = 0;
	while (str[i])
	{
		if (str[i] == (char)c)
			return (&str[i]);
		i++;
	}
	if ((char)c == '\0')
		return (&str[i]);
	return (NULL);
}
char	*ft_strdup(const char *src)
{
	int		i;
	char	*dest;

	i = 0;
	dest = (char *)malloc((ft_strlen(src) + 1) * sizeof(char));
	if (dest == 0)
		return (NULL);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
size_t	ft_strlen(const char *str)
{
	size_t i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}