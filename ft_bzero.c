/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ateymour <ateymour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 10:25:21 by ateymour          #+#    #+#             */
/*   Updated: 2023/01/06 10:26:57 by ateymour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <stddef.h>
#include <string.h>
void ft_bzero(void *s, size_t n) {
size_t i;
i = 0;
while (i < n){
    *((char *) (s+i)) = '\0';
    i++;

}
}
// }
// int main(int argc, char **argv)
// {
// char str[50];
// strcpy(str,argv[argc -1]);
// printf("%d\n",str[2]);
// ft_bzero(str, 2);
// // bzero(str,2);
// printf("%d\n",str[2]);

// }