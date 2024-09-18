#include<stdio.h>
int main(){
    int year;
    printf("Enter year: ");

    scanf("%d",&year);
    if (year%4==0)
    {
        printf("The given year is leap year");
    }
    else{
        printf("The given year is not a leap year");
    }
        
    return 0;
}