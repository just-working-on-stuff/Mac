/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghsaad <ghsaad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 19:02:03 by ghsaad            #+#    #+#             */
/*   Updated: 2025/02/24 19:02:07 by ghsaad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

static char	*read_buffer(int fd, char *buffer)
{
	char	*temp;
	int		byte_reader;

	temp = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!temp)
		return (NULL);
	byte_reader = 1;
	while (!ft_strchr(buffer, '\n') && byte_reader > 0)
	{
		byte_reader = read(fd, temp, BUFFER_SIZE);
		if (byte_reader == -1)
		{
            free(buffer); 
			free(temp);
			return (NULL);
		}
		temp[byte_reader] = '\0';
		buffer = ft_strjoin(buffer, temp);
	}
	free(temp);
	return (buffer);
}

static char	*new_line(char *buffer)
{
	char	*line;
	int		i;

	i = 0;
	if (!buffer[i])
		return (NULL);
	while (buffer[i] && buffer[i] != '\n')
		i++;
	line = malloc((i + 2) * sizeof(char));
	if (!line)
		return (NULL);
	i = 0;
	while (buffer[i] && buffer[i] != '\n')
	{
		line[i] = buffer[i];
		i++;
	}
	if (buffer[i] == '\n')
		line[i++] = '\n'; 
	line[i] = '\0';
	return (line);
}

static char	*update(char *buffer)
{
	char	*new_buffer;
	int		i;
	int		j;

	i = 0;
	while (buffer[i] && buffer[i] != '\n')
		i++;
	if (!buffer[i])
	{
		free(buffer);
		return (NULL);
	}
	new_buffer = malloc((ft_strlen(buffer) - i + 1) * sizeof(char));
	if (!new_buffer)
    {
        free(new_buffer);
		return (NULL);
    }
	i++;
	j = 0;
	while (buffer[i])
		new_buffer[j++] = buffer[i++];
	new_buffer[j] = '\0';
	free(buffer);
	return (new_buffer);
}

char	*get_next_line(int fd)
{
	static char	*buffer[MAX_FD];
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer[fd] = read_buffer(fd, buffer[fd]);
	if (!buffer[fd])
		return (NULL);
	line = new_line(buffer[fd]);
	buffer[fd] = update(buffer[fd]);
	if (!buffer[fd])
		free(buffer[fd]);
	return (line);
}
