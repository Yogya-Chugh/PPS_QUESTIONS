//PROGRAM TO FIND TRANSPOSE OF A MATRIX
#include<stdio.h>
#include<stdlib.h>
int main(){
    int r,c,f[100][100],b[100][100],i,j;
    printf("Enter order of matrix: ");
    scanf("%d",&r);
    c=r;
    if (r!=c){
        printf("Sorry !! Transpose is only possible for square matrices :)");
        exit(0);
    }
    for (i=1;i<=r;i++){
        for (j=1;j<=c;j++){
            printf("Enter value of a[%d][%d]",i,j);
            scanf("%d",&f[i-1][j-1]);
        }
    }
    for (i=0;i<=r;i++){
        for (j=0;j<=c;j++){
            b[i][j]=f[j][i];
        }
    }
    for (i=0;i<r;i++){
        for (j=0;j<c;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}