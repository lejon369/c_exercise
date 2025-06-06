#include<stdio.h>
#define PI 3.14159



int main (){
    float r, area ,volume;
    scanf("%f", &r);
    area = PI * r * r;  
    volume = (4.0/3.0) * PI * r * r * r;

    printf("A=%.4f\n", area);
    printf("V=%.4f\n", volume);
    return 0;
}