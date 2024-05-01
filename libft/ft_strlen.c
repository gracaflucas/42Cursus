/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lufiguei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 20:21:53 by lufiguei          #+#    #+#             */
/*   Updated: 2024/04/16 18:15:16 by lufiguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

/*
#include <stdio.h>

int	main(void)
{
	char	string[] = "HelloWorldHowAreUDoing?JustWantedToSayHi!!";
	int	sum;

	sum = ft_strlen(string);
	printf("Sum: %d\n", sum);	
	return (0);
}*/