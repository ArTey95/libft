#include <unistd.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h> 
void *ft_memcpy(void *dest, const void *src, size_t n){
    size_t i;
    size_t j;
    int overlap; 
    
    i = 0;
    overlap = 0;
    while (i <  n){
        j = 0;
        while(j<n){
            if ((dest+i) != (src + j)) {
                    j++;
            }
            else {
                overlap = 1;
                break;
            }
        }
        if(overlap ==1){
            break;
        }
        i++;
    }
    if(overlap == 0){
        i = 0; 
        while (i < n){
            *((unsigned char *)(dest + i)) = *((unsigned char *)(src + i));
            i++;
        }
    }
    else {
       dest = "overlap!\0";
    }

    return (dest);
}
// int main()
// {
// char src[10] = "123456789";


// // memcpy(src+3,src+4, 5);
// printf("%s",(unsigned char *)ft_memcpy(src,src+6,7));

// }