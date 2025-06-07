#include<stdio.h>

int main (){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n >= 100)
    {
        printf("this is a aerial form\n");
    }else 
    {
        printf("this is a lequid form\n");
    }
    
    
    return 0;
}