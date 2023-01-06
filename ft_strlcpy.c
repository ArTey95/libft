/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ateymour <ateymour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 10:26:17 by ateymour          #+#    #+#             */
/*   Updated: 2023/01/06 12:10:28 by ateymour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	while (*(src + i) != '\0' && i < dstsize - 1)
	{	
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	i = 0;
	while (*(src + i) != '\0')
	{	
		i++;
	}
	return (i);
}


// int	main(void)
// {
// 	size_t 	src_size;
// 	char 	*src;
// 	char 	*dest;

// 	src = calloc(11, sizeof(char));
// 	dest = calloc(8, sizeof(char));
// 	src = "alo galera";
    
// 	src_size = ft_strlcpy(dest, src, 8);
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            
// 	printf("src: %s\n", src);
// 	printf("dest: %s\n", dest);
// 	printf("src_size: %zu\n", src_size);
//     src_size = strlcpy(dest, src, 9);
// 	printf("src: %s\n", src);
// 	printf("dest: %s\n", dest);
//     printf("src_size: %zu\n", src_size);
// 	return(0);
// }