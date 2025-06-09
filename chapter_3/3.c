#include<stdio.h>

int main() {

    int n=3,i;
   
    for ( i = 1; i <= 100; i++,n+=3)
    {
        printf("%d\n", n);
    }

    return 0;
}
