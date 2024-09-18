#include<stdio.h> 
int main(){    
    //For integer
    int num;
    printf("Enter number: ");
    scanf("%d",&num);
    //same as float
    float f_num;
    printf("Enter number:%f\n");
    scanf("%f",&num);
    printf("The entered number is: %f\n",num);
    //for charcter
    char name;
    printf("Enter name: ");
    scanf("%c",&name);
    printf("The entered name is: %c\n",name);
    return 0;
}