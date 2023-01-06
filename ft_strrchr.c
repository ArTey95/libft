/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ateymour <ateymour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 13:15:08 by ateymour          #+#    #+#             */
/*   Updated: 2023/01/06 13:20:26 by ateymour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char *  ft_strrchr(const char *s, int c){
    int i;
    int j;
    
    if(c != 0){
        i = 0;
        while(*(s+i) != 0){
            i++;
        }
        j = i - 1;
        i = 0;
        while(j - i != 0){
            if (*(s+ j - i) == (char)c){
                return (char*)(s+ j - i);
            }
            i++;
        }
        return(0);
    }
    else {
        i = 0;
        while(*(s+i) != 0){
            i++;
        }
        return (char *)(s+i);
    }
}
// int main (void) {
//     printf("%s\n",ft_strrchr("abcdefghicjk",2));
// }