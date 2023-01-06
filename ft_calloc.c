/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ateymour <ateymour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 16:28:39 by ateymour          #+#    #+#             */
/*   Updated: 2023/01/06 16:39:22 by ateymour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
void * ft_calloc(size_t count, size_t size){
    size_t i;
    void *a;
    
    a = malloc(count * size);
    i = 0;
    while (i < count * size){
        *(char *)(a + i) = 0;
        i++;
    }
    return a;
}
// int main(void) {
//     char * a = ft_calloc(3,4);
//     char * b = calloc(3,4);
//     printf("%s\n", a);
//     printf("%s\n", b);
//     return(0);
// }