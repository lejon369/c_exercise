#include<stdio.h>
#include<math.h>

int main (){

    int janani,urmi,profit;
    janani= (36/6)*.35*1000; 
    urmi= (36/4)*.2*1000;

    profit = janani - urmi;


    if (janani > profit)
    {
        printf("Janani is more profitable than Urmi\n");
    }else
    {
        printf("urmi bank\n");
    }


    return 0;
}
