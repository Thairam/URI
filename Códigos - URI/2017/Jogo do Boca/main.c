#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[102];
    int i;
    int m =0;

    gets(str);

    for(i = 0; str[i]; i++){
        m+= str[i] - '0';
    }
    printf("%d\n", m%3);
        return 0;
}
