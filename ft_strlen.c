#include <stdio.h>
#include <ctype.h>
int ft_strlen(const char *s) {
    int i = 0;
    while(*(s + i) != 0) {
        i++;
    }
    return (i);
}
int main(int argc, char **argv)
{

// printf("%d",ft_strlen(argv[argc -1 ]));
// printf("%d",strlen(argv[argc -1 ]));

}