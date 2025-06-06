

#include<stdio.h>

int main (){
    float meter,feet, inch;

    scanf("%f", &meter);
    feet = meter * 3.28084;
    inch = (feet - (int)feet) * 12;

    printf("%d\n",(int) feet);
    printf("%.2f\n", inch);

    return 0;
}


