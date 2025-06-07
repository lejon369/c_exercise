#include<stdio.h>
#include<math.h>

int main (){

    int root,n;
    printf("Enter a total sit & curent_passnger: ");
    scanf("%d", &n);

    root = sqrt(n);

    if (root *root == n)
    {
        printf("yes\n");
    }else
    {
        printf("not\n");
    }


    return 0;
}
