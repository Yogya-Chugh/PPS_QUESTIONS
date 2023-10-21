#include<stdio.h>
int main(){
    int r1,c1,i,j,a[100][100],b[100][100];
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
    for (i=1;i<=r1;i++){
        for (j=1;j<=c1;j++){
            printf("Enter value of b[%d][%d]",i,j);
            scanf("%d",&b[i-1][j-1]);
        }
    }
    for (i=1;i<=r1;i++){
        for (j=1;j<=c1;j++){
            printf("%d ",(a[i-1][j-1]+b[i-1][j-1]));
        }
        printf("\n");
    }
    return 0;
}