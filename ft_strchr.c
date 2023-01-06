/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ateymour <ateymour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 12:41:32 by ateymour          #+#    #+#             */
/*   Updated: 2023/01/06 13:14:29 by ateymour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char *  ft_strchr(const char *s, int c){
    int i;
    
    if(c != 0){
        i = 0;
        while(*(s+i) != 0){
            if (*(s+i) == (char)c){
                return (char*)(s+i);
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
//     printf("%s\n",ft_strchr("abcdefghijk",'z'));
// }