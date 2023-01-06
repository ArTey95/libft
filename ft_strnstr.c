/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ateymour <ateymour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 14:40:10 by ateymour          #+#    #+#             */
/*   Updated: 2023/01/06 15:21:00 by ateymour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t		i;
	size_t		j;

	if (*needle == 0)
		return ((char *)haystack);
	i = 0;
	while (*(haystack + i) != 0 && i < n)
	{
		if (*(haystack + i) == *needle)
		{
            j = 0;
			while (*(haystack + i + j) == *(needle + j))
			{
				j++;
			}
            if (*(needle + j) == 0){
                return ((char *)(haystack + i));
            }
		}
		i++;
	}
    return (0);
	
}
// int main (void){
//     printf("%s\n",ft_strnstr("hjabdabc", "ab",4));
//     printf("%s\n",strnstr("hjabdabc", "ab",4));
    
// }