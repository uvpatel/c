#include<stdio.h>
int main(){
    char ch;
    printf("Enter charater: ");
    scanf("%c",&ch);
        if (97 >= ch && ch<=122)
        {
            printf("Your character is in uppercase");
        }
        else
        {
            printf("Your character is in lower case");
    }
    
    
    return 0;
}