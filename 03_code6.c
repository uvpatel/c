#include<stdio.h>
int main(){
    float num_a,num_b,num_c,num_d;
    printf("Enter number: ");
    scanf("%f",&num_a);
    printf("Enter number: ");
    scanf("%f",&num_b);
    printf("Enter number: ");
    scanf("%f",&num_c);
    printf("Enter number: ");
    scanf("%f",&num_d);
    if(num_a==num_b && num_a==num_c && num_a==num_d){
        printf("All number are greatest  and same");
    }
    else{
        if(num_a>num_b && num_a>num_c && num_a>num_d){
            printf("The number 1 is gretest");
            }
            else if(num_b>num_a && num_b>num_c && num_b>num_d){
                printf("The number 2 is gretest");
            }
            else if(num_c>num_a&& num_c>num_b && num_c>num_d){
                printf("The number 3 is gretest");
            }
            else if(num_d>num_a && num_d>num_b && num_d>num_c){
                printf("The number 4 is gretest");
            }

        else{
            if(num_a== num_b && num_b >num_c &&num_b> num_d){
                printf("Number 1 and 2 is greatest");
            }
            else if(num_d== num_b && num_b>num_c && num_b> num_d){
                printf("Number 4 and 2 is greatest");
            }
            else if(num_c== num_b && num_b>num_c && num_b> num_d){
                printf("Number 2 and  3 is greatest");
            }
            else if(num_a== num_c && num_a>num_d && num_a> num_b){
                printf("Number 1 and  3 is greatest");
            }
            else if(num_a== num_d && num_a>num_b && num_a> num_c){
                printf("Number 1 and  4 is greatest");
            }
            else if(num_d== num_c && num_d>num_a && num_d> num_b){
                printf("Number 3 and  4 is greatest");
            }
            else{if((num_a==num_b)&&(num_b==num_c) && (num_a>num_d)){
                    printf("Number 1, 2, 3 are same and greatest");
                }
                else if((num_a==num_b)&&(num_a==num_d) && (num_a>num_d)){
                    printf("Number 1, 2, 4 are same and greatest");
                }
                else if((num_a==num_d)&&(num_a==num_c) && (num_a>num_d)){
                    printf("Number 1, 4, 3 are same and greatest");
                }
                else if((num_b==num_d)&& (num_b==num_c) && (num_a>num_d)){
                    printf("Number 2, 4, 3 are same and greatest");
            }
            
            }
            }
            
        }
        return 0;
    }