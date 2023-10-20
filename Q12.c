//PROGRAM TO REVERSE A STRING
#include<stdio.h>
int main(){
    char str1[20];
    printf("Enter string: ");
    gets(str1);
    printf("%s",strrev(str1));
    return 0;
}