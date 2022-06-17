#include<stdio.h>
void main ( )
{
   int a[3][3], i,j;
   int *p;
   printf("Enter elements of 2D array:");
   for (i=0;i<3;i++){
      for(j=0; j<3; j++){
         scanf("%d",&a[i][j]);
      }
   }
   p = &a[0][0];
   printf("Elements of 2d array are : \n");
   for(i=0;i<3;i++)
   {
      for (j=0;j<3;j++)
	  {
         printf("%d \t",*(p+i*3+j));
      }
      printf("\n");
   }
   
}
