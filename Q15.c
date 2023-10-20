//PROGRAM TO DISPLAY INPUTS IN ASCENDING ORDER
#include<stdio.h>
int main(){
    int r,c,a[100][100],i,j,p=1;
    printf("Enter no. of inputs: ");
    scanf("%d",&c);
    for (i=0;i<c;i++){
        printf("Enter number: ");
        scanf("%d",&a[0][i]);
    }
    for (i=(c-1);i>0;i--){
        for (j=0;j<i;j++){
            if (a[0][j]>a[0][j+1]){
                r=a[0][j];
                a[0][j]=a[0][j+1];
                a[0][j+1]=r;
            }
        }
    }
for (i=0;i<c;i++){
    printf("%d ",a[0][i]);
}
return 0;
}