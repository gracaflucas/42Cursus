/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lufiguei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 20:16:56 by lufiguei          #+#    #+#             */
/*   Updated: 2024/04/20 07:51:31 by lufiguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < (n - 1) && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	if (n == 0)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	size_t	i;
	size_t	j;
	size_t	n =         9;
	char	s1[] = "Hello";
	char	s2[] = "HelloT";
	j = strncmp(s1, s2, n);
	i = ft_strncmp(s1, s2, n);
	printf("%zu\n%zu", i, j);
	return (0);
}*/
