#include<stdio.h>
#include<math.h>

int main (){

    int a,b,c;
    printf("Enter a total sit & curent_passnger: ");
    scanf("%d%d%d", &a,&b,&c);

    

    if (a>b)
    {
     if (a>c )
     {
         printf("a is big\n");
     }else
     {
         printf("c is big\n");
     }
         
    }else 
    {
            if (b > c )
     {
         printf("b is big\n");
     }else
     {
         printf("c is big\n");
     }
    }


    return 0;
}
