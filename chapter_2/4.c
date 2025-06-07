#include<stdio.h>

int main (){
    int n,p;
    printf("Enter a number: ");
    scanf("%d%d", &n,&p);

    if (n == p || n < p)
    {
        printf("alive\n");
    }else 
    {
        printf("die\n");
    }
    
    
    return 0;
}