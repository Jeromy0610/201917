#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("Hello world!\n");
    for(a=0; a<6; a++){
        b=a+1;
        c=c+b;
    }
    printf("c:%d",c);
    return 0;
}
