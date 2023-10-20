//PROGRAM TO DISPLAY INPUT IN MATRIX FORM
#include<stdio.h>
int main(){
    int r,c,f[100][100],i,j;
    printf("Enter number of rows: ");
    scanf("%d",&r);
    printf("Enter number of columns: ");
    scanf("%d",&c);
    for (i=1;i<=r;i++){
        for (j=1;j<=c;j++){
            printf("Enter value of a[%d][%d]",i,j);
            scanf("%d",&f[i-1][j-1]);
        }
    }
    for (i=1;i<=r;i++){
        for (j=1;j<=c;j++){
            printf("%d ",f[i-1][j-1]);
        }
        printf("\n");
    }
    return 0;
}