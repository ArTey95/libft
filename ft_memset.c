/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ateymour <ateymour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 10:25:11 by ateymour          #+#    #+#             */
/*   Updated: 2023/01/06 10:26:58 by ateymour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h> 
void *ft_memset(void *b, int c, size_t n){
    size_t i;

    i = 0;
    while (i <  n){
       *((unsigned char *)(b + i)) = c;
        i++;
    }


    return (b);
}
// int main(int argc, char **argv)
// {
// char str[50];
// strcpy(str,argv[argc -1]);
// printf("%s\n",str);
// ft_memset(str, 'a', 2);
// printf("%s",str);
// // printf("%s",ft_memset(argv[argc -1],'a',3));

// }