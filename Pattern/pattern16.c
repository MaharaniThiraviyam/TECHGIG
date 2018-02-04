#include<stdio.h>
int main(){
 int n,i,j,z;
 scanf("%d",&n);

 for(i=n,z=1;i>=1;i--,z++){
  for(j=1;j<=i;j++)
   printf("%d ",z);
 printf("\n");

 }
return 0;
}
