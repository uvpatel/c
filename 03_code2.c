#include<stdio.h>
int main(){
    float math,chem,phy;
    printf("Enter marks1: ");
    scanf("%f",&math);
    printf("Enter marks2: ");
    scanf("%f",&chem);
    printf("Enter marks3: ");
    scanf("%f",&phy);

    float per = (math+chem+phy)/3;
    printf("The persentage is: %f ",per);
    if(per<33){
        printf("You are fail");
    }
    else{
        if(math && chem && phy<40){
            printf("You are fail");

        }
        else{
            printf("You are pass");
        }
    }

    return 0;
}