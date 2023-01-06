/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ateymour <ateymour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 13:35:47 by ateymour          #+#    #+#             */
/*   Updated: 2023/01/06 14:34:09 by ateymour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;


	i = 0;

	if (n == 0)
	{
		return (0);
	}
	while ((i < n) && (s1[i] || s2[i]))
	{

		if (*(s1 + i) != *(s2 +i) )
			return (*(s1 + i) - *(s2 +i));
		i++;
	}
	return (0);
}

// int main(void){
// char *s1 = "abcdef\0ghi";
// har *s2 = "abcdef\0fhi";
// printf("%d\n", ft_strncmp(s1,s2,9));
// printf("%d\n", strncmp(s1,s2,9));
// }