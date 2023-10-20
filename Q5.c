//PROGRAM TO FIND SUM OF INDIVIDUAL DIGITS OF A NUMBER
#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter number: ");
    scanf("%d",&n);
    while(n/10!=0){
        sum+=n%10;
        n/=10;
    }
    sum+=n;
    printf("SUM :- %d",sum);
    return 0;
}