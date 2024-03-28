#include<stdio.h>
int main()
{
int i,j,n;
printf("Here n is how many lines you want to print 0\n");
printf("Enter the value of n.(N must be an  odd   number ):");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
 if(i==1 || i==n || j==1 || j==n)
 printf(" *");
 else
 printf("  ");
}
printf("\n");

}




    return 0;
}