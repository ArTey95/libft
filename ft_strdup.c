/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ateymour <ateymour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 16:41:58 by ateymour          #+#    #+#             */
/*   Updated: 2023/01/06 16:56:42 by ateymour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char *ft_strdup(const char *s1)
{   
    size_t i = 0;
    char *s2;


	while ( *(s1 + i) != 0)
    {
        i++;
    }
    s2 = malloc(i);	
	i = 0;
	while (*(s1 + i) != 0)
	{	
		*(s2 + i) = *(s1 + i);
        i++;
	}
	return (s2);
}

// int main(void){
//     printf("%s\n",ft_strdup("sadasda"));
//     printf("%s\n",strdup("sadasda"));
//     return(0);
// }