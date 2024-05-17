// 10} Function to calculate first N Padovan number
// Sujith S 2-Oct-23
#include<stdio.h>
int padovan(int);
void main(){
int n, k, i;
printf("how many terms you want to print : " );
scanf("%d",&n);
printf( "First %d padovan numbers are :\n",n);
for( i=0;i<n;i++) {
    k=padovan(i);
printf("%d ",k);
}
//k=padovan(n-1);
//printf("%d ",k); //for nth element , remove for loop
}
int padovan(int r) {
if(r==0)
return 1;
if(r==1)
return 1;
if(r==2)
return 1;
if (r > 2)
return (padovan(r-2)+padovan(r-3)) ;
}

