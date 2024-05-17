// 12} Function to calculate first N perrin numbers
// Sujith S 7-Oct-23
#include<stdio.h>
int perrin(int);
void main(){
int n, k, i;
printf("how many terms you want to print : " );
scanf("%d",&n);
printf( "First %d perrin numbers are :\n",n);
for( i=0;i<n;i++) {
    k=perrin(i);
printf("%d ",k);
}
//k=perrin(n-1);
//printf("%d ",k); //for nth element
}
int perrin(int r) {
if(r==0)
return 3;
if(r==1)
return 0;
if(r==2)
return 2;
if (r > 2)
return (perrin(r-2)+perrin(r-3)) ;
}

