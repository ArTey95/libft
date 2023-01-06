/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ateymour <ateymour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 10:26:13 by ateymour          #+#    #+#             */
/*   Updated: 2023/01/06 12:22:05 by ateymour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	s;
    size_t	d;
    size_t	i;


	s = 0;
	while (*(src + s) != '\0')
	{	
		s++;
	}
    d = 0;
	while (*(dest + d) != '\0')
	{	
		d++;
	}

	i = 0;
	while (*(src + i) != '\0' && i < dstsize - d -1)
	{	
		*(dest + d + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
    return (s+d);

}
// int	main(void)
// {
// 	size_t 	src_size;
// 	char 	*src;
// 	char 	*dest;

// 	src = calloc(11, sizeof(char));
// 	dest = calloc(8, sizeof(char));
// 	src = "alo galera";
    
// 	src_size = ft_strlcat(dest, src, 9);
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            
// 	printf("src: %s\n", src);
// 	printf("dest: %s\n", dest);
// 	printf("src_size: %zu\n", src_size);
//     // src_size = strlcat(dest, src, 9);
// 	// printf("src: %s\n", src);
// 	// printf("dest: %s\n", dest);
//     // printf("src_size: %zu\n", src_size);
// 	return(0);
// }