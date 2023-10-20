//PROGRAM TO FIND ROOTS OF QUADRATIC EQUATION
#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,d,p;
    float root1,root2;
    printf("Taking equation as ax^2 + bx + c, enter values: \n");
    printf("a: ");
    scanf("%f",&a);
    printf("b: ");
    scanf("%f",&b);
    printf("c: ");
    scanf("%f",&c);
    d=b*b-4*a*c;
    if (d==0){
        root1=-b/(2*a);
        printf("The quadratic equation %fx^2 + %fx + %f has equal roots, i.e. %f",a,b,c,root1);
    }   
    else if (d>0){
        p=pow(d,0.5);
        root1=((-1*b)+p)/(2*a);
        root2=((-1*b)-p)/(2*a);
        printf("The quadratic equation %fx^2 + %fx + %f has roots, %f and %f",a,b,c,root1,root2);
    }
    else{
        printf("The quadratic equation %fx^2 + %fx + %f has no real roots",a,b,c);
    }
    return 0;
}