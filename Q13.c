//PROGRAM TO REVERSE A NUMBER
#include<stdio.h>
int main(){
    int n,new=0;
    printf("Enter number: ");
    scanf("%d",&n);
    while(n!=0){
        new*=10;
        new+=n%10;
        n/=10;
    }
    printf("%d",new);
    return 0;
}