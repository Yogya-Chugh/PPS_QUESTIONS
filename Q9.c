//PROGRAM TO DISPLAY PASCAL'S TRIANGLE FOR 'N' NUMBER OF ROWS
#include<stdio.h>
int main(){
    int n,i,j,a[100][100],pl;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    for (i=0;i<n;i++){
        for (j=0;j<=i;j++){
            a[i][0]=1;
            a[i][i]=1;
            if (i!=0 && i!=1){
            a[i][j]=a[i-1][j-1]+a[i-1][j];
            }
        }
    }
    for (i=0;i<n;i++){
        for(pl=n-i;pl>=0;pl--){
            printf(" ");
        }
        for (j=0;j<=i;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}