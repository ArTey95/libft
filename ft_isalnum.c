#include <stdio.h>
#include <ctype.h>
int ft_isalnum(int c){
    
    if ( (('0' <= c) && (c <= '9')) || (('A' <= c) && (c <= 'Z'))|| (('a' <= c) && (c <= 'z' ))) {
        return (1);
        }   
    else {
        return(0);
    }    

}

int main(int argc, char **argv)
{

// printf("%d",ft_isalnum(argv[argc -1 ][0]));
// printf("%d",isdigit(argv[argc -1 ][0]));

}