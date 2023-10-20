//PROGRAM TO FIND FACTORIAL OF A NUMBER USING RECURSIVE/NON-RECURSIVE WAY
#include<stdio.h>
#include<math.h>
int factorial(int n){
    if (n==1){
        return 1;
    }
    else{
        return (n*factorial(n-1));
    }
}
int main(){
    int n,m,fact=1,p;
    printf("Enter number: ");
    scanf("%d",&p);
    n=p;
    printf("1.Recursive\n2.Non-Recursive\nEnter choice (1 or 2): ");
    scanf("%d",&m);
    switch (m){
        case 1:
            fact=factorial(n);
            printf("%d! = %d",p,fact);
            break;
        case 2:
            while (n!=0){
                fact*=n;
                n-=1;
            }
            printf("%d! = %d",p,fact);
            break;
    }
    return 0;
}