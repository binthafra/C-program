#include<stdio.h>
int main()
{
    int arr[3][3],i,j,sum=0;

    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    scanf("%d",&arr[i][j]);

   for(i=0;i<3;i++)
   {
    sum=sum+arr[i][i];
    }
    printf("sum of diagonals elements: %d ",sum);

        return 0;
}
