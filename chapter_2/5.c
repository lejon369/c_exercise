#include<stdio.h>

int main (){
    int f,n,t;
    printf("Enter a total sit & curent_passnger: ");
    scanf("%d%d", &n,&t);

    f = n - t;
    
    if (f >=5)
    {
        printf("yes\n");
    }else 
    {
        printf("not\n");
    }
    
    
    return 0;
}