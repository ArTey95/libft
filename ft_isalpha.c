#include <unistd.h>
#include<stdio.h>
int ft_isalpha(int c) {
    if ( (('A' <= c) && (c <= 'Z'))|| (('a' <= c) && (c <= 'z' ))) {
        return (1);
        }   
    else {
        return(0);
    }    

}


int main()
{
printf("%d",ft_isalpha(69));

}