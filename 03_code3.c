//tex
#include<stdio.h>

int main(){
    float income;
    printf("Enter your income: ");
    scanf("%f",&income);
    if(income<250000){
        printf("Your tex is 0");
    }
    else{
       if(250000.0<=income<500000.0){
        printf("Your tax is:%f ",income*0.05);
       }
        else if (500000.0<=income<1000000.0)
        {
            printf("Your tax is:%f ",income*0.2);
        }
        else if (1000000.0<=income)
        {
            printf("Your tax is: %f",income*0.3);
        }
        }
        return 0;
}