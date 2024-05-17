// 1} Finding Sum and Average of N numbers: 
// Sujith S 13-Sept-23
#include<stdio.h>
void main()
{
int i,n,a[100];
float sum=0,avg;
printf("Enter how many integers :");
scanf("%d",&n);
for(i=0;i<n;i++){
printf("Enter the number %d :",i+1);
scanf( "%d",&a[i]);
sum=sum+a[i];}
avg=sum/n;
printf("\nSum of %d given number is %.f",n,sum);
printf("\nAverage of %d given numbers is %.2f",n,avg);
}

