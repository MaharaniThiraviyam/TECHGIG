#include<stdio.h>
int main(){
 int n,i,j,z;
 scanf("%d",&n);

 for(i=n;i>=1;i--){
  for(j=1,z=n;j<=i;j++,z--)
   printf("%d ",z);
 printf("\n");

 }
return 0;
}
