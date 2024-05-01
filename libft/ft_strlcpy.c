/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lufiguei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 20:19:16 by lufiguei          #+#    #+#             */
/*   Updated: 2024/04/15 20:19:19 by lufiguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (i < size - 1 && src[i] != '\0')
		{
			dst[i] = src[i];
			i++;
		}
		dst [i] = '\0';
	}
	while (src[i] != '\0')
		i++;
	return (i);
}

/*
#include <stdio.h>

int	main(void)
{
	int	i;
	unsigned int	size = 9;
	char	src[] = "HelloWorld!";
	char	dest[] = "What should i say?";
	i = ft_strlcpy(dest, src, size);
	printf("Dest: %s\n", dest);
	printf("%i\n", i);
	return (0);
}*/
