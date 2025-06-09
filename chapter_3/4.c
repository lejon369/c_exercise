#include<stdio.h>

int main() {

    char c;
    int s=0;

    while (scanf("%c", &c) == 1 && c != '\n') {
         s += c - '0';
        
        if(s%3==0 ){
            printf("yes\n");
        }else{
            printf("no\n");
        }
    }
    


    return 0;
}
