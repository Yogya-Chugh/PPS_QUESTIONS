//PROGRAM TO FIND NUMBER OF CHARACTERS, WORDS AND LINES IN STRING
#include<stdio.h>
#include<string.h>
int main(){
    char a[1000];
    int i,countl=1,countw=1,countc=0,k;
    printf("Enter text: ");
    gets(a);
    k=strlen(a);
    printf("%d",k);
    for (i=0;i<k;i++){
        if (a[i]==46){
            countl+=1;
        }
        if ((a[i]==32 || a[i]==46) && ((a[i-1]>64 && a[i-1]<91) || (a[i-1]>96 && a[i-1]<123))){
            countw+=1;
        }
        else if ((a[i]>64 && a[i]<91) || (a[i]>96 && a[i]<123)){
            countc+=1;
        }
    }
    printf("There are %d characters , %d words and %d lines .",countc,countw,countl);
    return 0;
}