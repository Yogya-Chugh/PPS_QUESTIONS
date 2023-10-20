//PROGRAM TO PRINT PRIME NUMBERS FROM 1 TO N
#include<stdio.h>
int main(){
    int n,i,j,count=0;
    printf("Enter n: ");
    scanf("%d",&n);
    for (i=2;i<=n;i++){
        for (j=2;j<i;j++){
            if (i%j==0){
                count+=1;
            }
        }
        if (count==0){
            printf("%d\n",j);
        }
        count=0;
    }
    return 0;
    }