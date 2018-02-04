#include<stdio.h>
int main(){
 int n,i,j;char ch;
 scanf("%d",&n);

 for(i=1;i<=n;i++,ch--){
  for(j=1,ch='A';j<=i;j++,ch++)
   printf("%c ",ch);
 printf("\n");

 }
return 0;
}
