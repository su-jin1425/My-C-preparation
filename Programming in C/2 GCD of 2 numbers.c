// 2} GCD of 2 numbers
// Sujith S 15-Sept-23
#include <stdio.h>
int gcd (int,int);
int gcd (int a,int b){
    if (b==0)
    return a;
    else
    return(gcd(b,a%b));
}
void main(){
    int a,b,c;
    printf("Enter the first number :");
    scanf("%d",&a);
    printf("Enter the second number :");
    scanf("%d",&b);
    c=gcd(a,b);
    printf("gcd :%d",c);
}

