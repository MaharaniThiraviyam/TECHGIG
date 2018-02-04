#include<stdio.h>
int main(){
 int n,i,j,z;
 scanf("%d",&n);

 for(i=1,z=n;i<=n;i++,z--){
  for(j=1;j<=n;j++){
  if(j>=z)
   printf("%d ",i);
  else
    printf(" ");
  }
 printf("\n");

 }
return 0;
}
