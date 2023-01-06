/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ateymour <ateymour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 10:26:02 by ateymour          #+#    #+#             */
/*   Updated: 2023/01/06 10:26:49 by ateymour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h> 
void *ft_memmove(void *dest, const void *src, size_t n){
    size_t i;
    unsigned char buffer [n]; 

   
    i = 0;
    while (i < n){
        *(buffer + i) = *((unsigned char *)(src + i));
        i++;
    }
    i = 0;
    while (i < n){
        *((unsigned char *)(dest + i)) = *(buffer + i);
        i++;
    }
    return (dest);
}
int main()
{
char src[10] = "123456789";


printf("%s",(unsigned char *)memmove(src,src+1,4));
// printf("%s",(unsigned char *)ft_memmove(src,src+1,4));

}