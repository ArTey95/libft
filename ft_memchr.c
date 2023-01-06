/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ateymour <ateymour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 14:10:17 by ateymour          #+#    #+#             */
/*   Updated: 2023/01/06 14:19:52 by ateymour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

void *  ft_memchr(const void *s, int c, size_t n){
    size_t i;
    
    
    i = 0;
    while(i < n){
        if (*(char *)(s+i) == (char)c){
            return (void*)(s+i);
        }
        i++;
    }
    return(0);
    

}
// int main (void) {
//     printf("%s\n",ft_memchr("abcdefghijk",0, 7));
//     printf("%s\n",memchr("abcdefghijk",0, 7));
//     return (0);
// }