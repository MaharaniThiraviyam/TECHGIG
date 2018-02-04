#include<stdio.h>
int main(){
 int n,i,j;char ch='A';
 scanf("%d",&n);
 
 for(i=n;i>=1;i--,ch++){
  for(j=1;j<=i;j++)
   printf("%c ",ch);
 printf("\n");

 }
return 0;
}
