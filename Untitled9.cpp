#include<stdio.h>

int main(){

  int a[10][10],i,j,sum=0,m,n;

  printf("\nEnter rows and columns: ");
  scanf("%d %d",&m,&n);

  printf("\nEnter elements: ");
  for(i=0;i<m;i++)
      for(j=0;j<n;j++)
           scanf("%d",&a[i][j]);
  printf("\nThe matrix is\n");

  for(i=0;i<m;i++){
      printf("\n");
      for(j=0;j<m;j++){
      printf("%d\t",a[i][j]);
      }
 }
 for(i=0;i<m;i++){
     for(j=0;j<n;j++){
          if(i==j)
              sum=sum+a[i][j];
     }
 }
 printf("\n\nSum of the diagonal elements: %d",sum);

 return 0;
}
