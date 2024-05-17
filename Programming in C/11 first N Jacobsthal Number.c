// 11} Function to calculate first N jacobsthal number
// Sujith S 5-Oct-23
#include<stdio.h>
int jacob(int);
void main(){
int n, k, i;
printf("how many terms you want to print : " );
scanf("%d",&n);
printf( "First %d jacobsthal numbers are :\n",n);
for(i=0;i<n;i++) {
    k=jacob(i);
printf("%d ",k);
}
//k=jacob(n-1);
//printf("%d ",k); //for nth element
}
int jacob(int r) {
if(r==0)
return 0;
if(r==1)
return 1;
if (r > 1)
return (jacob(r-1)+2*jacob(r-2)) ;
}

