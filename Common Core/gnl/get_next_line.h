/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghsaad <ghsaad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 19:02:44 by ghsaad            #+#    #+#             */
/*   Updated: 2025/02/24 19:02:44 by ghsaad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H
#include <stdlib.h>
#include <unistd.h>

# ifndef BUFFER_SIZE
# define BUFFER_SIZE 42
# endif

char    *get_next_line(int fd);
char	*ft_strjoin(char *str1, char *str2);
char	*ft_strchr(char *str, int c);
char	*ft_strdup(const char *src);
size_t	ft_strlen(const char *str);

#endif