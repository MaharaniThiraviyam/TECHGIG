#include<stdio.h>
int main(){
 int n,i,j;char ch;
 scanf("%d",&n);
  ch='A'+n-1;
 for(i=1;i<=n;i++,ch--){
  for(j=1;j<=5;j++)
   printf("%c ",ch);
 printf("\n");

 }
return 0;
}
