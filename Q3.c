//PROGRAM TO PERFORM VARIOUS ARITHMETIC OPERATIONS
#include<stdio.h>
int main(){
    float a,b;
    int n;
    printf("1.Addition\n2.Subtraction\n3.Multiplication\n3.Division\nEnter number: ");
    scanf("%d",&n);
    printf("Enter a: ");
    scanf("%f",&a);
    printf("Enter b: ");
    scanf("%f",&b);
    switch (n){
        case 1:
            printf("a + b = %f",a+b);
            break;
        case 2:
            printf("a - b = %f",a-b);
            break;
        case 3:
            printf("a * b = %f",a*b);
            break;
        case 4:
            printf("a / b = %f",a/b);
            break;
        default:
            printf("Sorry !! Incorrect Input");
    }
    return 0;
}