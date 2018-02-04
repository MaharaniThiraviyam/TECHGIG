#include<stdio.h>
int main(){
 int n,i,j,z;char ch;
 scanf("%d",&n);
 ch='A'+n-1;
 for(i=n;i>=1;i--){
  for(j=1,z=ch;j<=i;j++,z--)
   printf("%c ",z);
 printf("\n");

 }
return 0;
}
