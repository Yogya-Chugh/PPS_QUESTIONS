//PROGRAM TO MULTIPLY TWO MATRICES
#include<stdio.h>
#include<stdlib.h>
int main(){
    int c1,r1,c2,r2,i,j,a[100][100],b[100][100],c[100][100],p,sum,k;
    printf("MATRIX 1\nEnter number of rows: ");
    scanf("%d",&r1);
    printf("Enter number of columns: ");
    scanf("%d",&c1);
    for (i=1;i<=r1;i++){
        for (j=1;j<=c1;j++){
            printf("Enter value of a[%d][%d]",i,j);
            scanf("%d",&a[i-1][j-1]);
        }
    }
    printf("MATRIX2\nEnter number of rows: ");
    scanf("%d",&r2);
    printf("Enter number of columns: ");
    scanf("%d",&c2);
    for (i=1;i<=r2;i++){
        for (j=1;j<=c2;j++){
            printf("Enter value of b[%d][%d]",i,j);
            scanf("%d",&b[i-1][j-1]);
        }
    }
    if (c2!=r1){
        printf("Oops!! The matrices are not multiplicable !! :)");
        exit(0);
    }
    for (i=1;i<(r1*c2);i++){
        for (j=0;j<r1;j++){
            for(p=0;p<c2;p++){
                sum=0;
                for (k=0;k<=c2;k++){
                    sum+=a[j][k]*b[k][p];
                }
                c[j][p]=sum;
            }
        }
    }
    for (i=1;i<=r1;i++){
        for (j=1;j<=c2;j++){
            printf("%d ",c[i-1][j-1]);
        }
        printf("\n");
    }
    return 0;
}