/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ateymour <ateymour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 14:23:10 by ateymour          #+#    #+#             */
/*   Updated: 2023/01/06 14:33:25 by ateymour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;


	i = 0;

	if (n == 0)
	{
		return (0);
	}
	while ((i < n))
	{

		if (*(char *)(s1 + i) != *(char *)(s2 +i) )
			return (*(char *)(s1 + i) - *(char *)(s2 +i));
		i++;
	}
	return (0);
}

// int main(void){
//     char *s1 = "abcdef\0ghi";
//     char *s2 = "abcdef\0fghi";

//     printf("%d\n", ft_memcmp(s1,s2,9));
//     printf("%d\n", memcmp(s1,s2,9));
// }