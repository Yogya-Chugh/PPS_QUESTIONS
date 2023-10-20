//PROGRAM TO PRINT FIBONACCI SERIES
#include<stdio.h>
int main(){
    int n,a=0,b=1,c,i;
    printf("Enter number: ");
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        printf("%d\n",a);
        c=b;
        b+=a;
        a=c;
    }
    return 0;
}